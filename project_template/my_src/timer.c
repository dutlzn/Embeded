/*
 * timer.c
 *
 *  Created on: 2022��11��2��
 *      Author: lzn
 */
#include "timer.h"


interrupt void cpu_timer0_isr(void) {
    LED0 = ~LED0;
    CpuTimer0.InterruptCount++;
    // �ж��Ѿ�Ӧ�𣬿��Դ���1���ո����ж�
    PieCtrlRegs.PIEACK.all = PIEACK_GROUP1;
}

interrupt void cpu_timer1_isr(void) {
    LED1 = ~LED1;
    CpuTimer1.InterruptCount++;
    // ֱ��ȷ�ϣ�����pie
    EDIS;
}

interrupt void cpu_timer2_isr(void) {
    LED2 = ~LED2;
    CpuTimer2.InterruptCount++;
    EDIS;
}

//void delay_1ms(int ms) {
//    while (--ms) { DELAY_US(1000); }
//}


void CPU_Timer_Config(void)
{

    EALLOW;
        // ���жϷ����ӳ������ڵ�ַ��ֵ���ж�������
        PieVectTable.TINT0 = &cpu_timer0_isr;
        PieVectTable.XINT13 = &cpu_timer1_isr;
        PieVectTable.TINT2 = &cpu_timer2_isr;
        EDIS;

    // cpu��ʼ�� ϵͳ�Դ�����
    InitCpuTimers();

// ��ʼ��cpu�Ĳ���
#if (CPU_FRQ_150MHZ)
    ConfigCpuTimer(&CpuTimer0, 150, 1000000);
    ConfigCpuTimer(&CpuTimer1, 150, 2000000);
    ConfigCpuTimer(&CpuTimer2, 150, 3000000);
#endif
#if (CPU_FRQ_100MHZ)
    ConfigCpuTimer(&CpuTimer0, 100, 1000000);
    ConfigCpuTimer(&CpuTimer1, 100, 2000000);
    ConfigCpuTimer(&CpuTimer2, 100, 3000000);
#endif

    // ϵͳ��ʱ����ʼ����
    //4001��4��TIEλ�������ж�ʹ�ܣ���λ��1ʱ������������0�����ж���Ч������TssдΪ0��������ʱ�������1�������壬���д��4000��һ���ġ�
    CpuTimer0Regs.TCR.all = 0x4001;
    CpuTimer1Regs.TCR.all = 0x4001;
    CpuTimer2Regs.TCR.all = 0x4001;

    // ʹ��cpu�����ж�
    IER |= M_INT1;
    IER |= M_INT13;
    IER |= M_INT14;

    // ʹ��pie�����жϣ�ֻ��ҪTimer0����������Ҫ
    PieCtrlRegs.PIEIER1.bit.INTx7 = 1;
}



void led_init(void) {
    EALLOW;

    GpioCtrlRegs.GPAMUX1.bit.GPIO0 = 0;
    GpioCtrlRegs.GPADIR.bit.GPIO0 = 1;
    GpioDataRegs.GPACLEAR.bit.GPIO0 = 1;

    GpioCtrlRegs.GPAMUX1.bit.GPIO1 = 0;
    GpioCtrlRegs.GPADIR.bit.GPIO1 = 1;
    GpioDataRegs.GPACLEAR.bit.GPIO1 = 1;

    GpioCtrlRegs.GPAMUX1.bit.GPIO2 = 0;
    GpioCtrlRegs.GPADIR.bit.GPIO2 = 1;
    GpioDataRegs.GPACLEAR.bit.GPIO2 = 1;


    EDIS;
}




/*
 * timer.c
 *
 *  Created on: 2022年11月2日
 *      Author: lzn
 */
#include "timer.h"


interrupt void cpu_timer0_isr(void) {
    LED0 = ~LED0;
    CpuTimer0.InterruptCount++;
    // 中断已经应答，可以从组1接收更多中断
    PieCtrlRegs.PIEACK.all = PIEACK_GROUP1;
}

interrupt void cpu_timer1_isr(void) {
    LED1 = ~LED1;
    CpuTimer1.InterruptCount++;
    // 直接确认，无需pie
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
        // 将中断服务子程序的入口地址赋值给中断向量表
        PieVectTable.TINT0 = &cpu_timer0_isr;
        PieVectTable.XINT13 = &cpu_timer1_isr;
        PieVectTable.TINT2 = &cpu_timer2_isr;
        EDIS;

    // cpu初始化 系统自带函数
    InitCpuTimers();

// 初始化cpu的参数
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

    // 系统定时器开始运行
    //4001中4是TIE位，代表中断使能，该位置1时若计数器减到0，则中断生效。再有Tss写为0，开启定时器。这个1毫无意义，如果写成4000是一样的。
    CpuTimer0Regs.TCR.all = 0x4001;
    CpuTimer1Regs.TCR.all = 0x4001;
    CpuTimer2Regs.TCR.all = 0x4001;

    // 使能cpu级别中断
    IER |= M_INT1;
    IER |= M_INT13;
    IER |= M_INT14;

    // 使能pie级别中断，只需要Timer0，其他不需要
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




#include "DSP28x_Project.h"
#include "sys_init.h"
#include "exint.h"
//#include "led.h"
//#include "key.h"
// #include "timer.h"

interrupt void ISRExint1(void)
{
    PieCtrlRegs.PIEACK.all = PIEACK_GROUP1;  //0x0001����12���ж�ACKnowledge�Ĵ���������ȫ������������������ж�
    DELAY_US(1000);                          //��ʱ
    if (GpioDataRegs.GPADAT.bit.GPIO13 == 0) //��⵽��ƽ�仯�����ж�
    {
        LED0 = ~LED0;
        LED1 = ~LED1;
        LED2 = ~LED2;
        LED3 = ~LED3;
        LED4 = ~LED4;

        DELAY_US(5000); //��ʱ
    }
}

int main(void)
{
    sys_config();
    // �ж���ӳ�䣬ע���жϳ�����ڣ��û���������ӣ�
    EALLOW;
    PieVectTable.XINT1 = &ISRExint1; // ���ⲿ�ж���Ӷ��ж���������
    EDIS;

    IER |= M_INT1;                     //ʹ�ܵ�1���ж�
    PieCtrlRegs.PIECTRL.bit.ENPIE = 1; //ʹ�����ж�
    PieCtrlRegs.PIEIER1.bit.INTx4 = 1; //ʹ�ܵ�1���ж���ĵ�4���ж�--�ⲿ�ж�1

    /* ���岽������û����ܾ������*/
    EINT;
    ERTM;
    led_init();
    ex_int_init();

    for (;;)
    {
    }

    return 0;
}

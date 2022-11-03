#include "DSP28x_Project.h"
#include "sys_init.h"
#include "exint.h"
//#include "led.h"
//#include "key.h"
// #include "timer.h"

interrupt void ISRExint1(void)
{
    PieCtrlRegs.PIEACK.all = PIEACK_GROUP1;  //0x0001赋给12组中断ACKnowledge寄存器，对其全部清除，不接受其他中断
    DELAY_US(1000);                          //延时
    if (GpioDataRegs.GPADAT.bit.GPIO13 == 0) //检测到电平变化触发中断
    {
        LED0 = ~LED0;
        LED1 = ~LED1;
        LED2 = ~LED2;
        LED3 = ~LED3;
        LED4 = ~LED4;

        DELAY_US(5000); //延时
    }
}

int main(void)
{
    sys_config();
    // 中断重映射，注册中断程序入口（用户按需求添加）
    EALLOW;
    PieVectTable.XINT1 = &ISRExint1; // 将外部中断添加都中断向量表里
    EDIS;

    IER |= M_INT1;                     //使能第1组中断
    PieCtrlRegs.PIECTRL.bit.ENPIE = 1; //使能总中断
    PieCtrlRegs.PIEIER1.bit.INTx4 = 1; //使能第1组中断里的第4个中断--外部中断1

    /* 第五步：添加用户功能具体代码*/
    EINT;
    ERTM;
    led_init();
    ex_int_init();

    for (;;)
    {
    }

    return 0;
}

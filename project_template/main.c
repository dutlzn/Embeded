#include "DSP28x_Project.h"
//#include "led.h"
//#include "key.h"
#include "timer.h"

/**
 * 主函数
 */
int main(void)
{
    // 初始化系统控制：锁相环、看门狗、外设时钟使能
    InitSysCtrl();
    // 初始化GPIO
    InitGpio();
    // 清理所有中断，初始化中断向量表，禁止CPU中断
    // 所有标志位都被清除
    InitPieCtrl();
    // 禁止所有CPU中断，清除CPU中断相关标志位
    IER = 0x0000;
    IFR = 0x0000;
    // 初始化中断向量表，中断向量表就是采用指针指向中断服务程序入口地址
    InitPieVectTable();

    led_init();
    CPU_Timer_Config();

    EINT; //使能全局中断
   ERTM; //使能全局实时中断
   for (;;)
   {
   }



	return 0;
}

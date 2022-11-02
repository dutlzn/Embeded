#include "DSP28x_Project.h"
#include "led.h"
#include "key.h"

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

    led_configuration();
    key_configuration();

    for(;;) {
        int i = 0;
        switch  (i = key_scan()) {
         case 5: break;

         case 1: LED0 = ~LED0;
                 delay_1ms(1000);
                 LED0 = ~LED0;
                 break;

         case 2: LED1 = ~LED1;
                 delay_1ms(1000);
                 LED1 = ~LED1;
                 break;

         case 3: LED2 = ~LED2;;
                 delay_1ms(1000);
                 LED2 = ~LED2;
                 break;

         case 4: LED3 = ~LED3;
                 delay_1ms(1000);
                 LED3 = ~LED3;
                 break;

         default:break;

        }
    }
	return 0;
}

/**
 *  ********************************************************************************************
 *  @file                 bsp.led.c
 *  @file                 SK Electronics
 *  @version           V1.0
 *  @date               2020-xx-xx
 *  @brief               LED应用函数接口
 *  *******************************************************************************************
 *  @attention
 *  实验平台：SK-F28335Mini   核心板
 *  CSDN博客：https://blog.csdn.net/weixin_46556696
 *  淘宝：https://shop409670932.taobao.com
 */
#include "bsp_led.h"
void LED_GPIO_Config(void)
{
    EALLOW;
    GpioCtrlRegs.GPAMUX1.bit.GPIO0=0;//普通IO模式
    GpioCtrlRegs.GPAPUD.bit.GPIO0=0;//使能内部上拉
    GpioCtrlRegs.GPADIR.bit.GPIO0=1;//配置成输出

    GpioCtrlRegs.GPAMUX1.bit.GPIO1=0;//普通IO模式
    GpioCtrlRegs.GPAPUD.bit.GPIO1=0;//使能内部上拉
    GpioCtrlRegs.GPADIR.bit.GPIO1=1;//配置成输出

    GpioCtrlRegs.GPAMUX1.bit.GPIO2=0;//普通IO模式
    GpioCtrlRegs.GPAPUD.bit.GPIO2=0;//使能内部上拉
    GpioCtrlRegs.GPADIR.bit.GPIO2=1;//配置成输出

    GpioCtrlRegs.GPAMUX1.bit.GPIO3=0;//普通IO模式
    GpioCtrlRegs.GPAPUD.bit.GPIO3=0;//使能内部上拉
    GpioCtrlRegs.GPADIR.bit.GPIO3=1;//配置成输出

    GpioCtrlRegs.GPAMUX1.bit.GPIO4=0;//普通IO模式
    GpioCtrlRegs.GPAPUD.bit.GPIO4=0;//使能内部上拉
    GpioCtrlRegs.GPADIR.bit.GPIO4=1;//配置成输出

    GpioDataRegs. GPASET.bit.GPIO0=1;
    GpioDataRegs. GPASET.bit.GPIO1=1;
    GpioDataRegs. GPASET.bit.GPIO2=1;
    GpioDataRegs. GPASET.bit.GPIO3=1;
    GpioDataRegs. GPASET.bit.GPIO4=1;
    EDIS;
}


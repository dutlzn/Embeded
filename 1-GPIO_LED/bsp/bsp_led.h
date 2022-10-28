/**
 *  ********************************************************************************************
 *  @file                 main.c
 *  @file                 SK Electronics
 *  @version           V1.0
 *  @date               2020-xx-xx
 *  @brief               LED应用函数接口头文件
 *  *******************************************************************************************
 *  @attention
 *  实验平台：SK-F28335Mini   核心板
 *  CSDN博客：https://blog.csdn.net/weixin_46556696
 *  淘宝：https://shop409670932.taobao.com
 */

#ifndef _BSP_LED_H_
#define _BSP_LED_H_
#include "DSP28x_Project.h"

/* 宏带参，可以像内联函数一样使用,低电平亮灯*/
#define LED0(a) if (a)  \
                    GpioDataRegs. GPACLEAR.bit.GPIO0=1;\
                    else        \
                    GpioDataRegs. GPASET.bit.GPIO0=1

#define LED1(a) if (a)  \
                    GpioDataRegs. GPACLEAR.bit.GPIO1=1;\
                    else        \
                    GpioDataRegs. GPASET.bit.GPIO1=1

#define LED2(a) if (a)  \
                    GpioDataRegs. GPACLEAR.bit.GPIO2=1;\
                    else        \
                    GpioDataRegs. GPASET.bit.GPIO2=1

#define LED3(a) if (a)  \
                    GpioDataRegs. GPACLEAR.bit.GPIO3=1;\
                    else        \
                    GpioDataRegs. GPASET.bit.GPIO3=1

#define LED4(a) if (a)  \
                    GpioDataRegs. GPACLEAR.bit.GPIO4=1;\
                    else        \
                    GpioDataRegs. GPASET.bit.GPIO4=1

/*定义IO口的宏*/
#define LED0_TOGGLE     GpioDataRegs. GPATOGGLE.bit.GPIO0=1
#define LED0_OFF        GpioDataRegs. GPASET.bit.GPIO0=1
#define LED0_ON         GpioDataRegs. GPACLEAR.bit.GPIO0=1

#define LED1_TOGGLE     GpioDataRegs. GPATOGGLE.bit.GPIO1=1
#define LED1_OFF        GpioDataRegs. GPASET.bit.GPIO1=1
#define LED1_ON         GpioDataRegs. GPACLEAR.bit.GPIO1=1

#define LED2_TOGGLE     GpioDataRegs. GPATOGGLE.bit.GPIO2=1
#define LED2_OFF        GpioDataRegs. GPASET.bit.GPIO2=1
#define LED2_ON         GpioDataRegs. GPACLEAR.bit.GPIO2=1

#define LED3_TOGGLE     GpioDataRegs. GPATOGGLE.bit.GPIO3=1
#define LED3_OFF        GpioDataRegs. GPASET.bit.GPIO3=1
#define LED3_ON         GpioDataRegs. GPACLEAR.bit.GPIO3=1

#define LED4_TOGGLE     GpioDataRegs. GPATOGGLE.bit.GPIO4=1
#define LED4_OFF        GpioDataRegs. GPASET.bit.GPIO4=1
#define LED4_ON         GpioDataRegs. GPACLEAR.bit.GPIO4=1

void LED_GPIO_Config(void);
#endif /*_BSP_LED_H_ */

/**
 *  ********************************************************************************************
 *  @file                 main.c
 *  @file                 SK Electronics
 *  @version           V1.0
 *  @date               2020-xx-xx
 *  @brief               LEDӦ�ú����ӿ�ͷ�ļ�
 *  *******************************************************************************************
 *  @attention
 *  ʵ��ƽ̨��SK-F28335Mini   ���İ�
 *  CSDN���ͣ�https://blog.csdn.net/weixin_46556696
 *  �Ա���https://shop409670932.taobao.com
 */

#ifndef _BSP_LED_H_
#define _BSP_LED_H_
#include "DSP28x_Project.h"

/* ����Σ���������������һ��ʹ��,�͵�ƽ����*/
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

/*����IO�ڵĺ�*/
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

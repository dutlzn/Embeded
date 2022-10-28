/**
 *  ********************************************************************************************
 *  @file                 bsp.led.c
 *  @file                 SK Electronics
 *  @version           V1.0
 *  @date               2020-xx-xx
 *  @brief               LEDӦ�ú����ӿ�
 *  *******************************************************************************************
 *  @attention
 *  ʵ��ƽ̨��SK-F28335Mini   ���İ�
 *  CSDN���ͣ�https://blog.csdn.net/weixin_46556696
 *  �Ա���https://shop409670932.taobao.com
 */
#include "bsp_led.h"
void LED_GPIO_Config(void)
{
    EALLOW;
    GpioCtrlRegs.GPAMUX1.bit.GPIO0=0;//��ͨIOģʽ
    GpioCtrlRegs.GPAPUD.bit.GPIO0=0;//ʹ���ڲ�����
    GpioCtrlRegs.GPADIR.bit.GPIO0=1;//���ó����

    GpioCtrlRegs.GPAMUX1.bit.GPIO1=0;//��ͨIOģʽ
    GpioCtrlRegs.GPAPUD.bit.GPIO1=0;//ʹ���ڲ�����
    GpioCtrlRegs.GPADIR.bit.GPIO1=1;//���ó����

    GpioCtrlRegs.GPAMUX1.bit.GPIO2=0;//��ͨIOģʽ
    GpioCtrlRegs.GPAPUD.bit.GPIO2=0;//ʹ���ڲ�����
    GpioCtrlRegs.GPADIR.bit.GPIO2=1;//���ó����

    GpioCtrlRegs.GPAMUX1.bit.GPIO3=0;//��ͨIOģʽ
    GpioCtrlRegs.GPAPUD.bit.GPIO3=0;//ʹ���ڲ�����
    GpioCtrlRegs.GPADIR.bit.GPIO3=1;//���ó����

    GpioCtrlRegs.GPAMUX1.bit.GPIO4=0;//��ͨIOģʽ
    GpioCtrlRegs.GPAPUD.bit.GPIO4=0;//ʹ���ڲ�����
    GpioCtrlRegs.GPADIR.bit.GPIO4=1;//���ó����

    GpioDataRegs. GPASET.bit.GPIO0=1;
    GpioDataRegs. GPASET.bit.GPIO1=1;
    GpioDataRegs. GPASET.bit.GPIO2=1;
    GpioDataRegs. GPASET.bit.GPIO3=1;
    GpioDataRegs. GPASET.bit.GPIO4=1;
    EDIS;
}


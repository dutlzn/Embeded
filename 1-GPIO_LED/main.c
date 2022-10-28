/**
 *  ********************************************************************************************
 *  @file                 main.c
 *  @file                 SK Electronics
 *  @version           V1.0
 *  @date               2020-xx-xx
 *  @brief               LED��ˮ�Ʋ���
 *  *******************************************************************************************
 *  @attention
 *  ʵ��ƽ̨��SK-F28335Mini   ���İ�
 *  CSDN���ͣ�https://blog.csdn.net/weixin_46556696
 *  �Ա���https://shop409670932.taobao.com
 */

#include "DSP28x_Project.h"
#include "bsp_led.h"
#define FLASH_RUN 1
#define SRAM_RUN 2
#define RUN_TYPE FLASH_RUN
#if RUN_TYPE==FLASH_RUN
extern Uint16 RamfuncsLoadStart;
extern Uint16 RamfuncsLoadEnd;
extern Uint16 RamfuncsRunStart;
#endif
void delay_1ms(Uint16 t);
/**
 *  @brief                           ������
 *  @parameter                  ��
 *  @return_value               ��
 */
void main(void)
{
/*��һ������ʼ��ϵͳ����:*/
    InitSysCtrl();

/*�ڶ�������ʼ��GPIO��*/
    InitGpio();

/* ����������������ж� �ͳ�ʼ�� PIE ������:*/
    DINT;// ����CPU�ж�
    InitPieCtrl();// ��ʼ�� PIE ���ƼĴ�����Ĭ��״̬��Ĭ��״̬��ȫ�� PIE �жϱ����úͱ�־λ�����
    IER = 0x0000;// ���� CPU �жϺ�������� CPU �жϱ�־λ:
    IFR = 0x0000;
    InitPieVectTable();// ��ʼ�� PIE �ж�������
    // �ж���ӳ�䣬ע���жϳ�����ڣ��û���������ӣ�

    //

/*������¼��28335����ѡ�ģ�*/
#if RUN_TYPE==FLASH_RUN
    MemCopy(&RamfuncsLoadStart,&RamfuncsLoadEnd,&RamfuncsRunStart);
    InitFlash();
#endif

/* ���Ĳ��� ��ʼ����������*/
    // InitPeripherals();  //��ʼ���������裨�����̲���Ҫ��

/* ���岽������û��������*/
    LED_GPIO_Config();//LED�˿ڳ�ʼ��

/*��������������ѭ��*/
    for(;;)
    {
        LED0(1);
        delay_1ms(1000);
        LED0(0);

        LED1(1);
        delay_1ms(1000);
        LED1(0);

        LED2(1);
        delay_1ms(1000);
        LED2(0);

        LED3(1);
        delay_1ms(1000);
        LED3(0);

        LED4(1);
        delay_1ms(1000);
        LED4(0);
    }
}

/**
 *  @brief                           1ms�ӳٺ���
 *  @parameter                  t
 *  @return_value               ��
 */
void delay_1ms(Uint16 t)
{
    while(t--)
    {
        DELAY_US(1000);
    }
}











#include "DSP28x_Project.h"
//#include "led.h"
//#include "key.h"
#include "timer.h"

/**
 * ������
 */
int main(void)
{
    // ��ʼ��ϵͳ���ƣ����໷�����Ź�������ʱ��ʹ��
    InitSysCtrl();
    // ��ʼ��GPIO
    InitGpio();
    // ���������жϣ���ʼ���ж���������ֹCPU�ж�
    // ���б�־λ�������
    InitPieCtrl();
    // ��ֹ����CPU�жϣ����CPU�ж���ر�־λ
    IER = 0x0000;
    IFR = 0x0000;
    // ��ʼ���ж��������ж���������ǲ���ָ��ָ���жϷ��������ڵ�ַ
    InitPieVectTable();

    led_init();
    CPU_Timer_Config();

    EINT; //ʹ��ȫ���ж�
   ERTM; //ʹ��ȫ��ʵʱ�ж�
   for (;;)
   {
   }



	return 0;
}

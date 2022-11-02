#include "DSP28x_Project.h"
#include "led.h"
#include "key.h"

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

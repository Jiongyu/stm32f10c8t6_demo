#ifndef __TEMPADC_H
#define	__TEMPADC_H


#include "stm32f10x.h"

//����12λ��ADC��3.3V��ADCֵΪ0xfff,�¶�Ϊ25��ʱ��Ӧ�ĵ�ѹֵΪ1.43V��0x6EE
#define V25  0x6EE	 

//б�� ÿ���϶�4.3mV ��Ӧÿ���϶�0x05
#define AVG_SLOPE 0x05

//ADC1_BASE��ַ��0x4000 0000+0x2400 ��ADC1�Ļ���ַ�������Ĺ������ݼĴ�����ƫ�Ƶ�ַ�ǣ�0x4c
 #define ADC1_DR_Address    ((u32)ADC1_BASE+0x4c)

void Temp_ADC1_Init(void);


#endif /* __TEMPADC_H */

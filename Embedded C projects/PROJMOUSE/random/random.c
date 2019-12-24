#include<avr/io.h>
#include<util/delay.h>
#include "lcd.h"
#include "adc.h"

void main ()
{
 DDRC=0xff;
 DDRA=0xC0;
  lcd_init();
  adc_init();
 lcd_cmd(0x01);
 _delay_ms(10);
 while(1)
  {
  adc_read(0);
  lcd_cmd(0xcf);
  lcd_num(ADC);
}}

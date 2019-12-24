#include<avr/io.h>
#include<util/delay.h>
#include "lcd.h"

void main ()
{
 DDRC=0xff;
  lcd_init();
  lcd_cmd(0x01);
  _delay_ms(10);
  lcd_cmd(0x86);
  lcd_string("A.M.");
  
 }



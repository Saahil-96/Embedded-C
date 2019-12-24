#include<avr/io.h>
#include<util/delay.h>
#include "lcd.h"

void main () 
{
 DDRC=0xff;
  lcd_init();
  lcd_cmd(0x01);
  _delay_ms(10);
  lcd_cmd(0x80);
  lcd_string("HELLO WORLD !");
  lcd_cmd(0xcf);
  lcd_num(321);
}

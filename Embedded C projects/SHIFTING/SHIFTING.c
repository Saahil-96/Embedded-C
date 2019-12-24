#include<avr/io.h>
#include<util/delay.h>
#include "lcd.h"

void main ()
{
 int i = 0x80,j;
 DDRC=0xff;
  lcd_init();
  lcd_cmd(0x01);
  _delay_ms(1);
while(1)
 { 
 for(i=0x80;i<=0x90;i++)
  {
  lcd_cmd(i-1);
  lcd_data(' ');
  lcd_cmd(i);
  lcd_string("IQB");
  _delay_ms(200);
  } 
 for(j=0xcf;j>=0xc0;j--)
  {
  lcd_cmd(j);
  lcd_string("IQB ");
  _delay_ms(200);
   if(j==0xc0)
    {
	 lcd_cmd(0x01);
    _delay_ms(1); 
     lcd_cmd(j);
     lcd_string("QB");
     _delay_ms(200);
    
	 lcd_cmd(0x01);
    _delay_ms(1); 
     lcd_cmd(j);
     lcd_string("B");
     _delay_ms(200);
    
	 lcd_cmd(0x01);
    _delay_ms(1); 
     lcd_cmd(j);
     lcd_string(" ");
     _delay_ms(200);
   
	}
  }  
 }
}

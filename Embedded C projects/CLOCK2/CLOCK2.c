#include<avr/io.h>
#include<util/delay.h>
#include "lcd.h"

void main ()
{
 DDRC=0xff;
 lcd_init();
 lcd_cmd(0x01);
 _delay_ms(10);
 while(1)
 {
 lcd_cmd(0xc4);
 lcd_string("00:00:00");

 int h,m,s;

 for(h=1;h<24;h++)
   {
   for(m=1;m<60;m++)
    {
	 for(s=0;s<60;s++)
	   {lcd_cmd(0x85);
        lcd_string("WATCH");
	    lcd_cmd(0xcb);
	    lcd_num(s);
		_delay_ms(1000);
		}
	 lcd_cmd(0xc8);
	 lcd_num(m);
	 lcd_cmd(0xca);
     lcd_data('0');
	 lcd_cmd(0xcb);
     lcd_data('0');

	  }
   lcd_cmd(0xc5);
   lcd_num(h);
   lcd_cmd(0xc7);
   lcd_data('0');
   lcd_cmd(0xc8);
   lcd_data('0');

   }
 }
}

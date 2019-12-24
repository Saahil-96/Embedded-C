#include<avr/io.h>
#include<util/delay.h>
#include "lcd.h"
#include "adc.h"
void car_start1();
void car_start2();

void main ()
{int x=0x80,y=0x81;
 DDRC=0xff;
 DDRA=0x02;
 lcd_init();
 adc_init();
 car_start1;
 car_start2;
 //car_stop1;
 //car_stop2;

 lcd_cmd(0x01);
 _delay_ms(10);

 while(1)
  {
  if(PINA&=0x01)
   {lcd_cmd(0x01);
    _delay_ms(10);
    lcd_cmd(x);
    lcd_data(0);
	lcd_cmd(y);
    lcd_data(1);
	y++;
	x++;
	_delay_ms(200);
	}
  }
  
}

void car_start1()
{
lcd_cmd(0x40);
lcd_data(0b00000000);
lcd_data(0b00000000);
lcd_data(0b00011000);
lcd_data(0b00011100);
lcd_data(0b00011111);
lcd_data(0b00011111);
lcd_data(0b00001100);
}

void car_start2()
{
lcd_cmd(0x48);
lcd_data(0b00000000);
lcd_data(0b00000000);
lcd_data(0b00000011);
lcd_data(0b00000111);
lcd_data(0b00011111);
lcd_data(0b00011111);
lcd_data(0b00001100);
}

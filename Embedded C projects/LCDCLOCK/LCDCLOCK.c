#include<avr/io.h>
#include<util/delay.h>
#include "lcd.h"

void main () 
{int a=0;
 DDRC=0xff;
 lcd_init();
 m();
 A();
 colon();
 zero();
 lcd_cmd(0x01);
 _delay_ms(10);
 
 while (1)
 {
      lcd_cmd(0x85);
      lcd_string("CLOCK");
      _delay_ms(1);
   
      lcd_cmd(0xc5);
      lcd_data(1);
      _delay_ms(10);
  
      lcd_cmd(0xc7);
      lcd_data(1);
      _delay_ms(10);
  
      lcd_cmd(0xc8);
      lcd_data(1);
      _delay_ms(10);
  
      lcd_cmd(0xc6);
      lcd_data(0);
      _delay_ms(10); 
   
      lcd_cmd(0xc9);
      lcd_data(2);   
      lcd_data(3);
      _delay_ms(10); 
   
     a++;
    
 }
  
}

void colon ()
{
 lcd_cmd(0x40);
 lcd_data(0b00000000);
 lcd_data(0b00000100);
 lcd_data(0b00000100);
 lcd_data(0b00000000);
 lcd_data(0b00000100);
 lcd_data(0b00000100);
 lcd_data(0b00000000);
}

void zero()
{
 lcd_cmd(0x48);
 lcd_data(0b00011111);
 lcd_data(0b00010001);
 lcd_data(0b00010001);
 lcd_data(0b00010001);
 lcd_data(0b00010001);
 lcd_data(0b00010001);
 lcd_data(0b00011111);
}


void A()
{
 lcd_cmd(0x50);
 lcd_data(0b00000000);
 lcd_data(0b00000000);
 lcd_data(0b00000000);
 lcd_data(0b00001110);
 lcd_data(0b00010001);
 lcd_data(0b00011111);
 lcd_data(0b00010001);
}

void m()
{
 lcd_cmd(0x58);
 lcd_data(0b00000000);
 lcd_data(0b00000000);
 lcd_data(0b00000000);
 lcd_data(0b00010001);
 lcd_data(0b00011011);
 lcd_data(0b00010101);
 lcd_data(0b00010001);
}

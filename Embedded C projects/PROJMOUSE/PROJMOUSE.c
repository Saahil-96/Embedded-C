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
  cuschar1();
 lcd_cmd(0x01);
 _delay_ms(10);
 while(1)
  {
  adc_read(1);
  lcd_cmd(0xcf);
  lcd_num(ADC);
/*  if((ADC>=180)&&(ADC<=200))
   {
      lcd_cmd(0x01);
      _delay_ms(10);
      lcd_cmd(0x80);
      lcd_data(0);
	  lcd_cmd(0x87);
      lcd_data('|');
      lcd_cmd(0x88);
      lcd_string("ENTER");
   }
  else if((ADC>210)&&(ADC<=240))
   {
      lcd_cmd(0x01);
      _delay_ms(10);
      lcd_cmd(0x81);
      lcd_data(0);
	  lcd_cmd(0x87);
      lcd_data('|');
      lcd_cmd(0x88);
      lcd_string("ENTER");
	  }
  else if((ADC>240)&&(ADC<=270))
   {
     lcd_cmd(0x01);
     _delay_ms(10);
     lcd_cmd(0x82);
     lcd_data(0);
	  lcd_cmd(0x87);
      lcd_data('|');
      lcd_cmd(0x88);
      lcd_string("ENTER");
 	 }
  else if((ADC>270)&&(ADC<=310))
   {
    lcd_cmd(0x01);
    _delay_ms(10);
    lcd_cmd(0x83);
    lcd_data(0);
	  lcd_cmd(0x87);
      lcd_data('|');
      lcd_cmd(0x88);
      lcd_string("ENTER");
	}
  else if((ADC>320)&&(ADC<=370))
   { 
    lcd_cmd(0x01);
    _delay_ms(10);
    lcd_cmd(0x84);
    lcd_data(0);
	  lcd_cmd(0x87);
      lcd_data('|');
      lcd_cmd(0x88);
      lcd_string("ENTER");
	}
  else if((ADC>370)&&(ADC<=420))
   {
    lcd_cmd(0x01);
    _delay_ms(10);
    lcd_cmd(0x85);
    lcd_data(0);
	  lcd_cmd(0x87);
      lcd_data('|');
      lcd_cmd(0x88);
      lcd_string("ENTER");
	}
  else if((ADC>420)&&(ADC<=480))
   {
    lcd_cmd(0x01);
    _delay_ms(10);
    lcd_cmd(0x86);
    lcd_data(0);
	  lcd_cmd(0x87);
      lcd_data('|');
      lcd_cmd(0x88);
      lcd_string("ENTER");
	}
  else if((ADC>480)&&(ADC<=570))
   {
    lcd_cmd(0x01);
    _delay_ms(10);
    lcd_cmd(0x87);
    lcd_data(0);
      lcd_cmd(0x88);
      lcd_string("ENTER");
	}
  else if((ADC>570)&&(ADC<=670))
   {
    lcd_cmd(0x01);
    _delay_ms(10);
    lcd_cmd(0x88);
    lcd_data(0);
	  lcd_cmd(0x87);
      lcd_data('|');
      lcd_cmd(0x89);
      lcd_string("NTER");
	}
  else if((ADC>680)&&(ADC<=800))
   {
    lcd_cmd(0x01);
    _delay_ms(10);
    lcd_cmd(0x89);
    lcd_data(0);
		  lcd_cmd(0x87);
      lcd_data('|');
      lcd_cmd(0x88);
      lcd_string("E");
	  lcd_cmd(0x8A);
      lcd_string("TER");
    } 

 _delay_ms(300);*/

  }
 }

void cuschar1()
{
lcd_cmd(0x40);
lcd_data(0b00000000);
lcd_data(0b00011111);
lcd_data(0b00011110);
lcd_data(0b00011100);
lcd_data(0b00011010);
lcd_data(0b00010001);
lcd_data(0b00000000);
}

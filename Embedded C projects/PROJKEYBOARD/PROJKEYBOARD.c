#include<avr/io.h>
#include<util/delay.h>
#include "lcd.h"
#include "adc.h"

void main ()
{
 int a=0,y=0x80,temp;
 DDRC=0xff;
 DDRA=0x03;
 lcd_init();
 adc_init();
 lcd_cmd(0x01);
 _delay_ms(10);
  while(1)
  {
  a=0;
  adc_read(0);
  lcd_cmd(0xcf);
  lcd_num(ADC);
    if((ADC>=150)&&(ADC<=250))
    {a=1;}
   else if((ADC>=260)&&(ADC<=370))
    {a=2;}
   else if((ADC>=380)&&(ADC<=500))
    {a=3;}
   else if((ADC>=510)&&(ADC<=700))
    {a=4;}
   else if((ADC>=710)&&(ADC<=900))
    {a=5;}
       if(a==1)
	    {lcd_cmd(y);
	      lcd_string("A");}
       else if(a==2)
	    {lcd_cmd(y);
	       lcd_string("B");}
       else if(a==3)
	    {lcd_cmd(y);
	      lcd_string("C");}
       else if(a==4)
	    {lcd_cmd(y);
	      lcd_string("D");}
       else if(a==5)
    	  {lcd_cmd(y);
	       lcd_string("E");}

     if((PINA&=0x03)&&(a==1))
	  {lcd_cmd(y);
	    lcd_string("A");
		 y++;}
     else if((PINA&=0x03)&&(a==2))
	  {lcd_cmd(y);
	    lcd_string("B");
		 y++;}
     else if((PINA&=0x03)&&(a==3))
	  {lcd_cmd(y);
	    lcd_string("C");
		  y++;}
     else if((PINA&=0x03)&&(a==4))
	  {lcd_cmd(y);
	    lcd_string("D");
		 y++;}
     else if((PINA&=0x03)&&(a==5))
	  {lcd_cmd(y);
	    lcd_string("E");
		 y++;}

    _delay_ms(500); 
  }
}

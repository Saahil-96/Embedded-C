#include<avr/io.h>
#include<util/delay.h>
#include "lcd.h"

void main ()
{
 int a=0,z=0;
 int y=0x80;
 
 DDRA=0b00000000;
 DDRB=0b11111111;
 DDRC=0b11111111;
 
 //LCD INITIALISE
 lcd_init();
 lcd_cmd(0x01);
 _delay_ms(10);
  
while(1)
{
   if((PINA&0x03)==0x01)
   {
 	   while((PINA&0x03)==0x01);
  		
		if(a==0)
  			{
			PORTC=0x08;
            _delay_ms(100);
  			PORTC=0b00000000;
  			lcd_cmd(y);
  			lcd_string("A");
  			a++;
			}
  
  		else if(a==1)
  			{
			PORTC=0x08;
  			_delay_ms(100);
		    PORTC=0b00000000;
  			lcd_cmd(y);
  			lcd_string("B");
  			a++;
			}
  
  		else if(a==2)
  			{
			PORTC=0x08;
  			_delay_ms(100);
  			PORTC=0b00000000;
		    lcd_cmd(y);
  			lcd_string("C");
  			a++;
			}
  
  		else if(a==3)
  			{
			PORTC=0x08;
  			_delay_ms(100);
  			PORTC=0b00000000;
  			lcd_cmd(y);
  			lcd_string("D");
  			a++;
			}
  
  		else if(a==4)
  		   {
		    PORTC=0x08;
  			_delay_ms(100);
  			PORTC=0b00000000;
  			lcd_cmd(y);
  			lcd_string("E");
  			a++; 
  			a=0;
			}
     }
 
 	  if((PINA&0x03)==0x02)
 		{
		 while((PINA&0x03)==0x02)
		  y++;
  		  a=0;
		 }
 
 	  while((PINA&0x03)==0x03)
 		{
		 z++;
	    _delay_ms(200);
		}
   		
	  if ((z!=0)&&(z<=3))
   		{
		lcd_cmd(y);
  		lcd_string(" ");
   		y--;
   		_delay_ms(100);
   		z=0;
		}
   
 	 if (z>=3)
   	 {
   	 PORTC=0x08;
   	 _delay_ms(200);
     PORTC=0b00000000;	
     lcd_cmd(0x01);
     _delay_ms(10);
     y=0x80;
     z=0;
	 }
    }

}

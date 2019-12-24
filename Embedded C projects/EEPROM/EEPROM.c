#include<avr/io.h>
#include<util/delay.h>
#include "lcd.h"
#include "eeprom.h"
#include "keypad.h"

void main ()
{
 unsigned int x=0,y=0,temp=0,A=0,b=0,c=0,d=0,i=0,p=0;
 DDRC=0xff;
 DDRA=0x00;
 DDRD=0xff;
 PORTA=0xff;
 lcd_init();
 lcd_cmd(0x01);
 _delay_ms(10);	 
 eeprom_write(0,1);
 eeprom_write(1,2);
 eeprom_write(2,3);
 eeprom_write(3,4);

 lcd_cmd(0x80);
 lcd_string("ENTER PIN -");

 while(1)
  {
    while(1)
	{int x=Keypad();
	    y=x/1000;
    
		if((x==10)&&(y!=0))
	     {break;}

     	else if ((x==10)&&(y==0))
	    {lcd_cmd(0x01);
	    _delay_ms(10);
	     lcd_cmd(0x85);
	     lcd_string("please enter full pin");
	     _delay_ms(500);
	     lcd_cmd(0xcf);
	      lcd_num(x);}
	    
		     x=(temp*10)+x;
			 i++;
	         lcd_cmd(0xcf);
	         lcd_num(x);   
             temp=x;
       }

	A=eeprom_read(0);
	b=eeprom_read(1);
	c=eeprom_read(2);
	d=eeprom_read(3);
	
    p=(A*1000)+(b*100)+(c*10)+d;

	if(p!=0)
	{PORTC=0x10;
	_delay_ms(100); }


   if(x==p)
    {lcd_cmd(0x01);
	 _delay_ms(10);
	 lcd_cmd(0x85);
	 lcd_string("please enter");
	 _delay_ms(500);
	 x=0;
	 temp=0;
	 i=0;
	 p=0;}
   else
    {lcd_cmd(0x01);
	 _delay_ms(10);
	 lcd_cmd(0x85);
	 lcd_string("wrong password");
	 _delay_ms(500);
	 x=0;
	 temp=0;}


  }
 }


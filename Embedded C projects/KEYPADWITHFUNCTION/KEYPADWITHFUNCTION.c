#include<avr/io.h>
#include<util/delay.h>
#include "lcd.h"
#include "keypad.h"

void main ()
{int A;
 DDRC=0xff;
 DDRA=0xf0;
 lcd_init();
 lcd_cmd(0x01);
 _delay_ms(10);
 while(1)
 { 
  lcd_cmd(0x80);
  lcd_data('0');
 while(PORTA!=0xff)      
 {
  int A=Keypad ();
  if(A==0)
  {
  lcd_cmd(0x80);
  lcd_data('0');
   }
  else if (A==1)
  {
  lcd_cmd(0x80);
  lcd_data('1');
   }
  else if (A==2)
  {
  lcd_cmd(0x80);
  lcd_data('2');
    }
  else if (A==3)
  {
  lcd_cmd(0x80);
  lcd_data('3');
   }
  else if (A==4)
  {
  lcd_cmd(0x80);
  lcd_data('4');
   }
  else if (A==5)
  {
  lcd_cmd(0x80);
  lcd_data('5');
   }
  else if (A==6)
  {
  lcd_cmd(0x80);
  lcd_data('6');
   }
  else if (A==7)
  {
  lcd_cmd(0x80);
  lcd_data('7');
   }       
  else if (A==8)
  {
  lcd_cmd(0x80);
  lcd_data('8');
    }
  else if (A==9)
  {
  lcd_cmd(0x80);
  lcd_data('9');
    }
  }
 }
}

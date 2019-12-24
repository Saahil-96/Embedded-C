#include<avr/io.h>
#include<util/delay.h>
#include "keypad.h"
#include "lcd.h"
int A;
void main ()
{
 DDRA=0b11110000;
 DDRC=0b11111111;
 lcd_init();
 lcd_cmd(0x01);
 _delay_ms(10);  
 while(1)
{
unsigned char a,b,c,d;
 PORTA=0b11101111;
 a=PINA&(1<<0);
 b=PINA&(1<<1);
 c=PINA&(1<<2);
 d=PINA&(1<<3);

 if ((c==0))
 { 
 lcd_cmd(0x01);
 _delay_ms(10); 
 lcd_cmd(0x8f);
 lcd_num(0); 
 }

 PORTA=0b11011111;
 a=PINA&(1<<0);
 b=PINA&(1<<1);
 c=PINA&(1<<2);
 d=PINA&(1<<3);

 if ((d==0))
 { 
 lcd_cmd(0x01);
 _delay_ms(10); 
 lcd_cmd(0x8f);
 lcd_num(1); 
  }
 if ((c==0))
 {
 lcd_cmd(0x01);
 _delay_ms(10);  
  lcd_cmd(0x8f);
 lcd_num(2);  
 }
 if ((b==0))
 { 
  lcd_cmd(0x01);
 _delay_ms(10); 
  lcd_cmd(0x8f);
 lcd_num(3);  
 }
 	
 PORTA=0b10111111;
 a=PINA&(1<<0);
 b=PINA&(1<<1);
 c=PINA&(1<<2);
 d=PINA&(1<<3);

 if ((d==0))
 {
 lcd_cmd(0x01);
 _delay_ms(10);  
  lcd_cmd(0x8f);
 lcd_num(4);
  }
 if ((c==0))
 { 
 lcd_cmd(0x01);
 _delay_ms(10); 
 lcd_cmd(0x8f);
 lcd_num(5);
   }
 if ((b==0))
 { 
 lcd_cmd(0x01);
 _delay_ms(10); 
 lcd_cmd(0x8f);
 lcd_num(6);
  }

 PORTA=0b01111111;
 a=PINA&(1<<0);
 b=PINA&(1<<1);
 c=PINA&(1<<2);
 d=PINA&(1<<3);

 if ((d==0))
 {
 lcd_cmd(0x01);
 _delay_ms(10);  
  lcd_cmd(0x8f);
 lcd_num(7); 
  }
 if ((c==0))
 { 
 lcd_cmd(0x01);
 _delay_ms(10); 
 lcd_cmd(0x8f);
 lcd_num(8);
  }
 if ((b==0))
 { 
 lcd_cmd(0x01);
 _delay_ms(10); 
  lcd_cmd(0x8f);
 lcd_num(9);
 }

}
}


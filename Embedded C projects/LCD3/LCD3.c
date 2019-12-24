#include<avr/io.h>
#include<util/delay.h>
#include "lcd.h"

void main () 
{
 DDRC=0xff;
 DDRB=0xff;
 lcd_init();
 cuschar2();
 cuschar1();
 lcd_cmd(0x01);
 _delay_ms(10);
 while (1)
{       
 PORTB=0b10101010;
 lcd_cmd(0x80);
 lcd_data(0);
 _delay_ms(200);
 lcd_cmd(0x01);
 _delay_ms(10);
  
 PORTB=~(0b10101010);
 lcd_cmd(0x81);
 lcd_data(1);
 _delay_ms(200);
 lcd_cmd(0x01);  
 _delay_ms(10);

 PORTB=0b10101010;
 lcd_cmd(0x82);
 lcd_data(0);
 _delay_ms(200);
 lcd_cmd(0x01);  
 _delay_ms(10);

 PORTB=~(0b10101010);
 lcd_cmd(0x83);
 lcd_data(1);
 _delay_ms(200);
 lcd_cmd(0x01);  
 _delay_ms(10);

 PORTB=0b10101010;
 lcd_cmd(0x84);
 lcd_data(0);
 _delay_ms(200);
 lcd_cmd(0x01);  
 _delay_ms(10);

 PORTB=~(0b10101010);
 lcd_cmd(0x85);
 lcd_data(1);
 _delay_ms(200);
 lcd_cmd(0x01);  
 _delay_ms(10);

 PORTB=0b10101010;
 lcd_cmd(0x86);
 lcd_data(0);
 _delay_ms(200);
 lcd_cmd(0x01); 
 _delay_ms(10);
 
 PORTB=~(0b10101010);
 lcd_cmd(0x87);
 lcd_data(1);
 _delay_ms(200);
 lcd_cmd(0x01);  
 _delay_ms(10);

 PORTB=0b10101010;
 lcd_cmd(0x88);
 lcd_data(0);
 _delay_ms(200);
 lcd_cmd(0x01);  
 _delay_ms(10);
                  
 PORTB=~(0b10101010);
 lcd_cmd(0x89);
 lcd_data(1);
 _delay_ms(200);
 lcd_cmd(0x01);  
 _delay_ms(10);
                   
 PORTB=0b10101010;
 lcd_cmd(0x8A);
 lcd_data(0);
 _delay_ms(200);
 lcd_cmd(0x01);  
 _delay_ms(10);
                   
 PORTB=~(0b10101010);
 lcd_cmd(0x8B);
 lcd_data(1);
 _delay_ms(200);
 lcd_cmd(0x01);  
 _delay_ms(10);
                   
 PORTB=0b10101010;
 lcd_cmd(0x8C);
 lcd_data(0);
 _delay_ms(200);
 lcd_cmd(0x01);  
 _delay_ms(10);
                   
 PORTB=~(0b10101010);
 lcd_cmd(0x8D);
 lcd_data(1);
 _delay_ms(200);
 lcd_cmd(0x01);  
 _delay_ms(10);
                   
 PORTB=0b10101010;
 lcd_cmd(0x8E);
 lcd_data(0);
 _delay_ms(200);
 lcd_cmd(0x01);  
 _delay_ms(10);
                   
 PORTB=~(0b10101010);
 lcd_cmd(0x8F);
 lcd_data(1);
 _delay_ms(200);
 lcd_cmd(0x01);  
  _delay_ms(10);
 }
}

void cuschar1()
 {
  lcd_cmd(0x40);
  lcd_data(0b00011111);
  lcd_data(0b00011111);
  lcd_data(0b00011111);
  lcd_data(0b00011111);
  lcd_data(0b00011111);
  lcd_data(0b00011111);
  lcd_data(0b00011111);
 }
 
 void cuschar2()
 {
  lcd_cmd(0x48);
  lcd_data(0b00000000);
  lcd_data(0b00000000);
  lcd_data(0b00000000);
  lcd_data(0b00000000);
  lcd_data(0b00000000);
  lcd_data(0b00000000);
  lcd_data(0b00000000);
 } 

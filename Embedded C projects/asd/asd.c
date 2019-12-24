#include<avr/io.h>
#include<util/delay.h>
void min ()
int count=0;

void main ()
{
 DDRD=0b11111111;
 while (1)
 {
  PORTD=0b11111100;
       min();
  PORTD=0b11011010;
       min();
  PORTD=0b01100110;
       min();
  PORTD=0b10111110;
       min();
  PORTD=0b11111110;
       min();
 }
}

void min()
{
 for(count=0;count<=6;count++)
  {
   _delay_ms(10000);
   }
}

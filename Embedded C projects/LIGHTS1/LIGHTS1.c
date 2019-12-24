#include<avr/io.h>
#include<util/delay.h>
void main ()
{
  DDRB=0b11111111;
 while(1)
 {int a,b; 
  a=0x01;
  b=0x80;
   for(int i=0;i<=3;i++)
    {
      PORTB=a|b;
      a=a<<1;
	  b=b>>1;
	  _delay_ms(100); 
	 }
 }
}


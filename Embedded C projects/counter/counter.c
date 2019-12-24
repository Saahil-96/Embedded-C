#include<avr/io.h>
#include<util/delay.h>

void main ()
{
 DDRB=0xff;
 while(1)
 {
  PORTB=1;
  _delay_ms(100);
  PORTB=2;
  _delay_ms(100);
  PORTB=3;
  _delay_ms(100);
  PORTB=4;
  _delay_ms(100);
  PORTB=5;
  _delay_ms(100);
  PORTB=6;
  _delay_ms(100);
  PORTB=7;
  _delay_ms(100);
  PORTB=8;
  _delay_ms(100);
  PORTB=9;
  _delay_ms(100);
  }
}

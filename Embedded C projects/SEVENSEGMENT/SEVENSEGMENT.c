#include<avr/io.h>
#include<util/delay.h>

void main ()
{
    DDRB=0xff; 
   while (1)
    {
	  PORTB=~(0b00111111);
	     _delay_ms(1000);
      PORTB=~(0b00000110);
        _delay_ms(1000);
     PORTB=~(0b01011011);
        _delay_ms(1000);
      PORTB=~(0b01001111);
       _delay_ms(1000);
      PORTB=~(0b01100110);
        _delay_ms(1000);
      PORTB=~(0b01101101);
        _delay_ms(1000);
      PORTB=~(0b01111101);
             _delay_ms(1000);
      PORTB=~(0b00000111);
             _delay_ms(1000);
      PORTB=~(0b01111111);
            _delay_ms(1000);
      PORTB=~(0b01101111);
            _delay_ms(1000);
    }
}

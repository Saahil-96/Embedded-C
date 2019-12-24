#include<avr/io.h>

void main()
{
  DDRA=0b00000000;
  PORTA=0b00000011;
  DDRC=0b10000001;
  DDRB=0b11111111;
  unsigned char a,b;
  while(1)
  {
    a=PINA&(1<<0);
	b=PINA&(1<<1);
    if((a!=0) && (b==0))  //if input at pin 0 is high 
    {
     PORTB=0b11110000;
     PORTC=0b10000000;
	}
	if((a==0) && (b!=0))
	{
	 PORTB=0b00001111;
     PORTC=0b00000001;
	}
    else if((a!=0) && (b!=0))
    {
     PORTB=0b00000000;
	 PORTC=0b00000000;
    }
	else if((a==0) && (b==0))
    {
     PORTB=0b11111111; 
	 PORTC=0b00000000;
	}
  }
}
//since led remains on despite else comdition - pull up method used (practically external r nd v applied btw pin nd switch)
//for atmega16 DDRA=0b00000000; nd PINA=0b11111111 

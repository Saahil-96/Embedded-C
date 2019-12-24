#include<avr/io.h>
#include<util/delay.h>

#define s1 PD0
#define s2 PD1


void display(int a)
{
 if (a==0)
	  {PORTC=0b00111111;}
	 else if (a==1)
	   {PORTC=0b00000110;}
     else if (a==2)
	    {PORTC=0b01011011;}
     else if (a==3)
	      {PORTC=0b01001111;}
     else if (a==4)
	       {PORTC=0b01100110;}
     else if (a==5)
	        {PORTC=0b01101101;}
	 else if (a==6)
	         {PORTC=0b01111101;}
     else if (a==7)
	          {PORTC=0b00000111;}
     else if (a==8)
               {PORTC=0b01111111;}
     else if (a==9)
	       	    {PORTC=0b01101111;
				  }  
	}


int main()
{

int count=0;

DDRC=0xff;
DDRD=0x03;

while(1)
{

PORTD=0x01;
display(count/10);
_delay_ms(1000);

PORTD=0x02;
display(count%10);
_delay_ms(1000);

count++;

}


}

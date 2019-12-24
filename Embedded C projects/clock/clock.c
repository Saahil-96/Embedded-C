#include<avr/io.h>
#include<util/delay.h>
void hr0();
void hr1();
void hr2();
void hr3();
void hr4();
void hr5();
void hr6();
void hr7();
void hr8();
void hr9();
void min();
int count;

void hr0()
  {
      PORTB=0b00111111;
   }
void hr1()
  {
      PORTB=0b00000110;
   }
void hr2()
  {
      PORTB=0b01011011;
    }
void hr3()
  {
      PORTB=0b01001111;
    }
void hr4()
  {
	  PORTB=0b01100110;
   }
void hr5()
  {
	  PORTB=0b01101101;
   }
void hr6()
  {
	  PORTB=0b01111101;
   }
void hr7()
  {
	  PORTB=0b00000111;
   }
void hr8()
  {
	  PORTB=0b01111111;
   }
void hr9()
  {
	  PORTB=0b01101111;
   }
void min ()
  { 
      for(count=0;count<=6;count++)
     {
    _delay_ms(10000);
   }
  }

void main ()
{
 int a=0,b=0 ;
  DDRA=0b11111111;
  DDRB=0b11111111;
  DDRC=0b11111111;
  DDRD=0b10000000;
   
   while(1)
    {
	if(b>=0 && b<6)
	  {hr0();}
	  else if(b>=6 && b<12)
	    {hr1();}
  	    else if(b>=12 && b<18)
	     {hr2();}
	     else if(b>=18 && b<24)
	      {hr3();}
	      else if(b>=24 && b<30)
	       {hr4();}
	      else if(b>=30 && b<36)
	        {hr5();}
	       else if(b>=36 && b<42)
	         {hr6();}
	        else if(b>=42 && b<48)
	          {hr7();}
	         else if(b>=48 && b<54)
	           {hr8();}
	          else if(b>=54)
	            {hr9();
				 b++;}


	if (a==0)
	  {PORTA=0b00111111;}
	 else if (a==1)
	   {PORTA=0b00110000;}
      else if (a==2)
	    {PORTA=0b01101101;}
       else if (a==3)
	     {PORTA=0b01111001;}
        else if (a==4)
	      {PORTA=0b01110010;}
         else if (a==5)
	       {PORTA=0b01011011;}
     
	  PORTC=0b00111111;
	       min();
      PORTC=0b00000110;
           min();
      PORTC=0b01011011;
           min();
  	  PORTC=0b01001111;
           min();
      PORTC=0b01100110;
           min();
      PORTC=0b01101101;
           min();
      PORTC=0b01111101;
           min();
      PORTC=0b00000111;
           min();
      PORTC=0b01111111;
           min();
      PORTC=0b01101111;
           min();
     a++;
     b++;	 	  
	  if(a==6)
	  {a=0;}     
	
	 
    }
}

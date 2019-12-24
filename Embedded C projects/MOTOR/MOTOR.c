#include<avr/io.h>
#include<util/delay.h>
void main () 
{
 int ADC2=0,ADC3=0;
 DDRB=0b00001111;
 DDRA=0xff;
  adc_init();
  while(1)
  {
  adc_read(0);
  adc_read(1);
  ADC2=ADC;
  adc_read(2);
  ADC3=ADC;
  while(ADC>=)
  {
  if((ADC2<=)&&(ADC2>=))
   {PORTB=0b00001010;}
  if(ADC2>=)
   {PORTB=0b00100000;} 
  if(ADC2<=)
   {PORTB=0b00010000;} 
   }
  while(ADC<=)
  {  if((ADC2<=)&&(ADC2>=))
   {PORTB=0b00000101;}
  if(ADC2>=)
   {PORTB=0b00100000;} 
  if(ADC2<=)
   {PORTB=0b00010000;} 
  }
  
  while(ADC2>=)
  {
  if((ADC<=)&&(ADC>=))
   {PORTB=0b00100000;}
  if(ADC>=)
   {PORTB=0b00001010;} 
  if(ADC<=)
   {PORTB=0b00000101;} 
   }

  while(ADC2<=)
  {
  if((ADC<=)&&(ADC>=))
   {PORTB=0b00010000;}
  if(ADC>=)
   {PORTB=0b00001010;} 
  if(ADC<=)
   {PORTB=0b00000101;} 
   }
  }
 }

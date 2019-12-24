void adc_init()
{
ADMUX|=(1<<REFS0);
ADCSRA|=(1<<ADEN)|(1<<ADPS2)|(1<<ADPS1)|(1<<ADPS0);
}
unsigned int adc_read(unsigned char a)
{
ADMUX=(0b01000000|a);
ADCSRA|=(1<<ADSC);

while(!ADCSRA&(1<<ADIF))
{
 }

ADCSRA|=(1<<ADIF);
return(ADC);
}


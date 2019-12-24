#include<avr/io.h>
#define  F_CPU  1000000
#include<util/delay.h>
#include<avr/adc.h>

void main ()
{

DDRB=0xff;
DDRA=0b00000000;
DDRC=0xff;

int analog_ir_sensor_value;
adc_init();
lcd_init();

while(1)
 {
 analog_ir_sensor_value = read_adc_channel(0);

 PORTB=analog_ir_sensor_value;
 
 _delay_ms(500);

 PORTB=analog_ir_sensor_value>>8;
 
 _delay_ms(500);
 }

}


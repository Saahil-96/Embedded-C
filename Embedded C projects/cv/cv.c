/*
 * keypad.c
 *
 * Created: 07-07-2015 12:18:24
 *  Author: saurabh ks
 */ 


#include <avr/io.h>
#include <util/delay.h>
#include "speaker.h"

void main()
{	timer_ctc_init();

    DDRA=0x00;
	PORTA=0XFF;
    DDRD=0xff;
	while (1)
	{
		
		PORTD=0b00001110;
		_delay_ms(10);
		if((PINA&0b00000001)==0)
		{
				 OCR0=59;
				 _delay_ms(1000);
				 //return(0);
		}
		if((PINA&0b00000010)==0)
		{
		//	while ((PINA&0b00000010)==0)
		//	{
			OCR0=52;
			_delay_ms(1000);
		//	}
		//	return(1);
		}
		if((PINA&0b00000100)==0)
		{
		//while ((PINA&0b00000100)==0)
		//{
		OCR0=46;
		_delay_ms(1000);
	//	}
	//	return(2);
		}
		if((PINA&0b00001000)==0)
		{
		//	while ((PINA&0b00001000)==0)
			//{ 
			OCR0=44;
			_delay_ms(1000);
		//	}
		//	return(3);
		}
		PORTD=0b00001101;
		_delay_ms(10);
		if((PINA&0b00000001)==0)
		{
		//	while ((PINA&0b00000001)==0)
		//	{ 
			 OCR0=38;
			 _delay_ms(1000);
		//	}
		//	return(4);
		}
		if((PINA&0b00000010)==0)
		{
		//	while ((PINA&0b00000010)==0)
		//	{
			OCR0=34;
			_delay_ms(1000);
		//	}
		//	return(5);
		}
		if((PINA&0b00000100)==0)
		{
		//	while ((PINA&0b00000100)==0)
			//{
			OCR0=30;
			_delay_ms(1000);
			//}
			//return(6);
		}
		if((PINA&0b00001000)==0)
		{
			//while ((PINA&0b00001000)==0)
			//{
			OCR0=28;
			_delay_ms(1000);
		//	}
		//	return(7);
		}
		/* PORTD=0b00001101;
		_delay_ms(10);
		if((PINA&0b00000001)==0)
		{
			while ((PINA&0b00000001)==0)
			{
			}
			return(8);
		}
		if((PINA&0b00000010)==0)
		{
			while ((PINA&0b00000010)==0)
			{
			}
			return(9);
		}
		if((PINA&0b00000100)==0)
		{
			while ((PINA&0b00000100)==0)
			{
			}
			return(10);
		}
		if((PINA&0b00000100)==0)
		{
			while ((PINA&0b00001000)==0)
			{
			}
			return(11);
		}
		PORTD=0b00001110;
		_delay_ms(10);
		if((PINA&0b00000001)==0)
		{
			while ((PINA&0b00000001)==0)
			{
			}
			return(12);
		}
		if((PINA&0b00000010)==0)
		{
			while ((PINA&0b00000010)==0)
			{
			}
			return(13);
		}
		if((PINA&0b00000100)==0)
		{
			while ((PINA&0b00000100)==0)
			{
			}
			return(14);
		}
		if((PINA&0b00001000)==0)
		{
			while ((PINA&0b00001000)==0)
			{
			}
			return(15);
		} */
		
	//	}
		
		
		}
   
			
	}
//}

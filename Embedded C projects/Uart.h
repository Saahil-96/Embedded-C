void uart_init()
{
	UBRRL=51;
	UBRRH=0;
	UCSRB|=(1<<RXEN)|(1<<TXEN);
	UCSRC|=(1<<URSEL)|(1<<UCSZ1)|(1<<UCSZ0);
}
void uart_send(unsigned char data)
{
	while(!(UCSRA&(1<<UDRE)))
	{
	}
	UDR=data;		
	}

unsigned char uart_rec()
{
	while(!(UCSRA& (1<<RXC)))
	{
			
	}
	return(UDR);
}

  








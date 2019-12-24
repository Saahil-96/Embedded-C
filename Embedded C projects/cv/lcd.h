#define lcd PORTC
#define rw 1
#define rs 0
#define e 2
void adc_init();
void lcd_cmd(unsigned char a)
{
// for first 4 bits
char b;
b=a&0xF0;
lcd=b;
lcd&=~(1<<rs);
lcd&=~(1<<rw);
lcd|=(1<<e);
_delay_ms(1);
lcd&=~(1<<e);

// for next 4 bits

b=(a<<4)&0xF0;
lcd=b;
lcd&=~(1<<rs);
lcd&=~(1<<rw);
lcd|=(1<<e);
_delay_ms(1);
lcd&=~(1<<e);
}

void lcd_data(unsigned char a)
{
// for first 4 bits
char b;
b=a&0xF0;
lcd=b;
lcd|=(1<<rs);
lcd&=~(1<<rw);
lcd|=(1<<e);
_delay_ms(1);
lcd&=~(1<<e);

// for next 4 bits

b=(a<<4)&0xF0;
lcd=b;
lcd|=(1<<rs);
lcd&=~(1<<rw);
lcd|=(1<<e);
_delay_ms(1);
lcd&=~(1<<e);
}

void lcd_init()
{
lcd_cmd(0x02);
lcd_cmd(0x28);
lcd_cmd(0x0C);
lcd_cmd(0x06);
}
void lcd_string(unsigned char *str)
{
	int i=0;
	while(str[i]!='\0')
	{	
		lcd_data(str[i]);
		i++;
}
}

void lcd_num(unsigned int num)
{ lcd_cmd(0x04);
int i=0;
while(num!=0)
{i=num%10;
lcd_data(i+48);
num=num/10;
}
lcd_cmd(0x06);
lcd_cmd(0x0c);
}


void timer_ctc_init()
{ 
TCCR0|=(1<<WGM01)|(1<<COM00)|(1<<CS01);
DDRB=0B00001000;
}

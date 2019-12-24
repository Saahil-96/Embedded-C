#define lcd PORTC
#define rs 0
#define rw 1
#define e 2

void lcd_cmd(unsigned char ch)
{
 unsigned char a = (ch & 0xf0);
 lcd = a;
 lcd&=~(1<<rs);
 lcd&=~(1<<rw);
 lcd|=(1<<e);
 _delay_ms(1);
 lcd&=~(1<<e);
a = (ch<<4)&(0xf0);
 lcd = a;
 lcd&=~(1<<rs);
 lcd&=~(1<<rw);
 lcd|=(1<<e);
 _delay_ms(1);
 lcd&=~(1<<e);

}

void lcd_data(unsigned char ch)
{
unsigned char a = (ch & 0xf0);
 lcd=a;
 lcd|=(1<<rs);
 lcd&=~(1<<rw);
 lcd|=(1<<e);
 _delay_ms(1);
 lcd&=~(1<<e);
a = (ch<<4)&(0xf0);
 lcd = a;
 lcd|=(1<<rs);
 lcd&=~(1<<rw);
 lcd|=(1<<e);
 _delay_ms(1);
 lcd&=~(1<<e);

}

void lcd_init()
{
 lcd_cmd(0x02); //reset
 lcd_cmd(0x28); //4bit mode 
 lcd_cmd(0x0c); //cursor on
 lcd_cmd(0x06); //auto increment
}

void lcd_string( unsigned char *str)
{
     int i =0;
     while(str[i]!='\0')
       {
              lcd_data(str[i]);
              i++;
             
       }
}

void lcd_num(unsigned long n)
{
  lcd_cmd(0x04);
   while(n>0)
 {
        int a =n%10; 
        lcd_data(a+48);
        n=n/10;
 }
lcd_cmd(0x06);
}

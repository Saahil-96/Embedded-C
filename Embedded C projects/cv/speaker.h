void timer_ctc_init()
{ 
TCCR0|=(1<<WGM01)|(1<<COM00)|(1<<CS01);
DDRB=0B00001000;
}

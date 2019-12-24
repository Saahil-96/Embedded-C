void eeprom_write(unsigned int add,unsigned char data)
{
 while(EECR & (1<<EEWE))
  {}
 EEAR=add;
 EEDR=data;
 EECR|=(1<<EEMWE);
 EECR|=(1<<EEWE);
}

unsigned char eeprom_read(unsigned int add)
{
 while(EECR & (1<<EEWE))
  {}
 EEAR=add;
 EECR|=(1<<EERE);
 return(EEDR);
}

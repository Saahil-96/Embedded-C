int Keypad ()
{
unsigned char a,b,c,d;
 PORTA=0b11101111;
 a=PINA&(1<<0);
 b=PINA&(1<<1);
 c=PINA&(1<<2);
 d=PINA&(1<<3);

 if ((c==0))
 { 
  return(0);
  }
 if ((a==0))
 { 
  return(10);
  }
 if ((b==0))
 { 
  return(15);
  }
 if ((d==0))
 { 
  return(16);
  }


 PORTA=0b11011111;
 a=PINA&(1<<0);
 b=PINA&(1<<1);
 c=PINA&(1<<2);
 d=PINA&(1<<3);

 if ((d==0))
 { 
 return(1);
  }
 if ((c==0))
 { 
 return(2);
  }
 if ((b==0))
 { 
 return(3);
  }
 if ((a==0))
 { 
  return(11);
  }
 	
 PORTA=0b10111111;
 a=PINA&(1<<0);
 b=PINA&(1<<1);
 c=PINA&(1<<2);
 d=PINA&(1<<3);

 if ((d==0))
 { 
 return(4);
  }
 if ((c==0))
 { 
 return(5);
  }
 if ((b==0))
 { 
 return(6);
  }
 if ((a==0))
 { 
  return(12);
  }

 PORTA=0b01111111;
 a=PINA&(1<<0);
 b=PINA&(1<<1);
 c=PINA&(1<<2);
 d=PINA&(1<<3);

 if ((d==0))
 { 
 return(7);
  }
 if ((c==0))
 { 
 return(8);
  }
 if ((b==0))
 { 
 return(9);
  }
 if ((a==0))
 { 
  return(13);
  }


}

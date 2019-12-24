//a,b,c,d used in header
//W is first no. , S is operation , D is second no.
//Q value returned for which op is to b done
//E returned from operations.h
//y=0xcf
//A returned from keypad.h
//B for welcome 
//used-a,b,c,d,q,W,S,D,Q,E,y,A,B
//unused-e,f,g,h,i,j,k,l,m,n,o,p,r,s,t,u,v,w,x,z,C,F,G,H,I,J,K,L,M,N,O,P,R,T,U,V,X,Y,Z
 
#include<avr/io.h>
#include<util/delay.h>
#include "lcd.h"
#include "keypad.h"
#include "operations.h"

void main ()
{
 int A,B,Q=0,q1=0,q2=0;
 int y=0x80,z=0xcf;
 DDRC=0xff;
 DDRA=0xf0;
 lcd_init();
 lcd_cmd(0x01);
 _delay_ms(10);
  while(1)
   {
    unsigned int W=0,D=0; 
	int S,Q=0,q1=0,q2=0,a=0,n=0;
	long E=0;
/*     for (B=0;B<=3;B++)   
		{
		lcd_cmd(0x84);
		lcd_string("Welcome.  ");	
       _delay_ms(500);
        lcd_cmd(0x8C);
		lcd_string(".");	
       _delay_ms(500);
	    lcd_cmd(0x8D);
		lcd_string(".");	
       _delay_ms(500);
	    }
	_delay_ms(100);*/ 
	 lcd_cmd(0x01);
    _delay_ms(10);
	lcd_cmd(0x80);
     lcd_data('0');
    	  while (PORTA!=0xff)
	    {
		  int A=Keypad ();
		    if(A==0)
		       {    if(Q!=1)
                  { lcd_cmd(0x01);
                    _delay_ms(10);
					W=(10*W)+0;
					lcd_cmd(y);
					lcd_num(W);
					 q1++;
					 y++;}
                    else if(Q==1)
                    {D=(10*D)+0;
					 y++;
					 lcd_cmd(y);
					 lcd_num(D);
					 q2++;}
					_delay_ms(500);     
         	    }
            else if(A==1)
		        {    if(Q!=1)
                    {
					lcd_cmd(0x01);
                    _delay_ms(10);
					W=(10*W)+1;
					lcd_cmd(y);
					lcd_num(W);
					 q1++;
					 y++;}
                    else if(Q==1)
                    {D=(10*D)+1;
					 y++;
					 lcd_cmd(y);
					 lcd_num(D);
					 q2++;}
					_delay_ms(500);     
                  }
    	     else if(A==2)
		        {  if(Q!=1)
                    {	
					lcd_cmd(0x01);
                    _delay_ms(10);
					W=(10*W)+2;
					lcd_cmd(y);
					lcd_num(W);
					 q1++;
					 y++;}
                    else if(Q==1)
                    {D=(10*D)+2;
					 y++;
					 lcd_cmd(y);
					 lcd_num(D);
					 q2++;}
					_delay_ms(500);     
          		 }
		     else if(A==3)
		   		{   if(Q!=1)
                    {
					lcd_cmd(0x01);
                    _delay_ms(10);
					W=(10*W)+3;
					lcd_cmd(y);
					lcd_num(W);
					 q1++;
					 y++;}
                    else if(Q==1)
                    {D=(10*D)+3;
					 y++;
					 lcd_cmd(y);
					 lcd_num(D);
					 q2++;}
					_delay_ms(500);     
          		       }
			 else if(A==4)
		   		{    if(Q!=1)
                   {lcd_cmd(0x01);
                    _delay_ms(10);
					W=(10*W)+4;
					lcd_cmd(y);
					lcd_num(W);
					 q1++;
					 y++;}
                    else if(Q==1)
                    {D=(10*D)+4;
					 y++;
					 lcd_cmd(y);
					 lcd_num(D);
					 q2++;}
					_delay_ms(500);     
    			 }
			 else if(A==5)
		  	    {   if(Q!=1)
                    {
					lcd_cmd(0x01);
                    _delay_ms(10);
					W=(10*W)+5;
					lcd_cmd(y);
					lcd_num(W);
					 q1++;
					 y++;}
                    else if(Q==1)
                    {D=(10*D)+5;
					 y++;
					 lcd_cmd(y);
					 lcd_num(D);
					 q2++;}
					_delay_ms(500);     
    			 }
		     else if(A==6)
		        {    if(Q!=1)
                    {
					lcd_cmd(0x01);
                    _delay_ms(10);
					W=(10*W)+6;
					lcd_cmd(y);
					lcd_num(W);
					 q1++;
					 y++;}
                    else if(Q==1)
                    {D=(10*D)+6;
					 y++;
					 lcd_cmd(y);
					 lcd_num(D);
					 q2++;}
					_delay_ms(500);     
    			 }
	         else if(A==7)
		        {    if(Q!=1)
                    {
					lcd_cmd(0x01);
                    _delay_ms(10);
					W=(10*W)+7;
					lcd_cmd(y);
					lcd_num(W);
					 q1++;
					 y++;}
                    else if(Q==1)
                    {D=(10*D)+7;
					 y++;
					 lcd_cmd(y);
					 lcd_num(D);
					 q2++;}
					_delay_ms(500);     
    			 }
		     else if(A==8)
		        {   if(Q!=1)
                    {
					lcd_cmd(0x01);
                    _delay_ms(10);
					W=(10*W)+8;
					lcd_cmd(y);
					lcd_num(W);
					 q1++;
					 y++;}
                    else if(Q==1)
                    {D=(10*D)+8;
					 y++;
					 lcd_cmd(y);
					 lcd_num(D);
					 q2++;}
					_delay_ms(500);     
    			 }
		     else if(A==9)
		        {   if(Q!=1)
                    {
					lcd_cmd(0x01);
                    _delay_ms(10);
					W=(10*W)+9;
					lcd_cmd(y);
					lcd_num(W);
					 q1++;
					 y++;}
                    else if(Q==1)
                    {D=(10*D)+9;
					 y++;
					 lcd_cmd(y);
					 lcd_num(D);
					 q2++;}
					_delay_ms(500);     
    			 }
		     else if(A==10)
		        {lcd_cmd(y);
		         lcd_data('+');
		     	S=A;
				Q=1;}
			 else if(A==11)
		        {lcd_cmd(y);
		         lcd_data('-');
		     	S=A;
				Q=1;}
             else if(A==12)
		        {lcd_cmd(y);
		         lcd_data('X');
 		     	S=A;
				Q=1;}
             else if(A==13)
		        {lcd_cmd(y);
		         lcd_data('/');
		     	S=A;
				Q=1;}		
	     	 else if(A==15)
	           {
  				if (S==10)
				 {E=add(W,D);}
				else if (S==11)
				 {E=subtract(W,D);}
				else if (S==12)
				 {E=multiply(W,D);}
				else if (S==13)
				 {E=divide(W,D);}
				lcd_cmd(0xcf);
	            lcd_num(E);
                 if((D>W)&&(S==11))
				 { for(n=1;n<=15;n++)
				   {E=E/10;
				     n++;
				     if (E<=1)
					  {break;}
					}
				  lcd_cmd(z-n);
				  lcd_data('-'); }
			    }
	       else if(A==16)
	           {
			   lcd_cmd(0x01);
			   _delay_ms(10);
			     lcd_cmd(0x80);
                 lcd_data('0');
			    W=0;
                S=0;
				D=0;
				E=0;
				Q=0;
				q1=0;
				q2=0;
				n=0;
				y=0x80;
				}   	
		}
     
   }
}



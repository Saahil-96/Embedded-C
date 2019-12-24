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
 int A,B,Q=0,q=0,a=0,temp=0;
 int y=0xcf;
 DDRC=0xff;
 DDRA=0xf0;
 lcd_init();
 lcd_cmd(0x01);
 _delay_ms(10);
  while(1)
   {
    int W,S,D;
	float E;
     for (B=0;B<=3;B++)   
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
	_delay_ms(100); 
	 lcd_cmd(0x01);
    _delay_ms(10);
	lcd_cmd(0xcf);
     lcd_data('0');
      while (PORTA!=0xff)
	    {
		  int A=Keypad ();
		    if(A==0)
		       {			   
		     if(q=1) 
             {lcd_cmd(y-1);
              lcd_num(a);}
             if(q=3)
            { lcd_cmd(y-1);
              lcd_num(a);}
              lcd_cmd(y);
              lcd_data(0);
              if(Q!=1)
             {W=(10*a)+0;}
              else if(Q=1)
             {D=(10*a)+0;}
              q++;
              a=0;
              _delay_ms(500);
         	  }
            else if(A==1)
		        {
			     if(q=1) 
             {lcd_cmd(y-1);
              lcd_num(a);}
             if(q=3)
            { lcd_cmd(y-1);
              lcd_num(a);}
              lcd_cmd(y);
              lcd_data(1);
              if(Q!=1)
             {W=(10*a)+1;}
              else if(Q=1)
             {D=(10*a)+1;}
              q++;
              a=1;
              _delay_ms(500);
    
				}
    	     else if(A==2)
		        {				
			     if(q=1) 
             {lcd_cmd(y-1);
              lcd_num(a);}
             if(q=3)
            { lcd_cmd(y-1);
              lcd_num(a);}
              lcd_cmd(y);
              lcd_data('2');
              if(Q!=1)
             {W=(10*a)+2;}
              else if(Q=1)
             {D=(10*a)+2;}
              q++;
              a=2;
              _delay_ms(500);
    			 }
		     else if(A==3)
		   		{		   		  
			     if(q=1) 
             {lcd_cmd(y-1);
              lcd_num(a);}
             if(q=3)
            { lcd_cmd(y-1);
              lcd_num(a);}
              lcd_cmd(y);
              lcd_data('3');
              if(Q!=1)
             {W=(10*a)+3;}
              else if(Q=1)
             {D=(10*a)+3;}
              q++;
              a=3;
              _delay_ms(500);
    			 }
			 else if(A==4)
		   		{
			     if(q=1) 
             {lcd_cmd(y-1);
              lcd_num(a);}
             if(q=3)
            { lcd_cmd(y-1);
              lcd_num(a);}
              lcd_cmd(y);
              lcd_data('4');
              if(Q!=1)
             {W=(10*a)+4;}
              else if(Q=1)
             {D=(10*a)+4;}
              q++;
              a=4;
              _delay_ms(500);
    			 }
			 else if(A==5)
		  	    {
			     if(q=1) 
             {lcd_cmd(y-1);
              lcd_num(a);}
             if(q=3)
            { lcd_cmd(y-1);
              lcd_num(a);}
              lcd_cmd(y);
              lcd_data('5');
              if(Q!=1)
             {W=(10*a)+5;}
              else if(Q=1)
             {D=(10*a)+5;}
              q++;
              a=5;
              _delay_ms(500);
    			 }
		     else if(A==6)
		        {
			     if(q=1) 
             {lcd_cmd(y-1);
              lcd_num(a);}
             if(q=3)
            { lcd_cmd(y-1);
              lcd_num(a);}
              lcd_cmd(y);
              lcd_data('6');
              if(Q!=1)
             {W=(10*a)+6;}
              else if(Q=1)
             {D=(10*a)+6;}
              q++;
              a=6;
              _delay_ms(500);
    			 }
	         else if(A==7)
		        {
			     if(q=1) 
             {lcd_cmd(y-1);
              lcd_num(a);}
             if(q=3)
            { lcd_cmd(y-1);
              lcd_num(a);}
              lcd_cmd(y);
              lcd_data('7');
              if(Q!=1)
             {W=(10*a)+7;}
              else if(Q=1)
             {D=(10*a)+7;}
              q++;
              a=7;
              _delay_ms(500);
    			 }
		     else if(A==8)
		        { 
			     if(q=1) 
             {lcd_cmd(y-1);
              lcd_num(a);}
             if(q=3)
            { lcd_cmd(y-1);
              lcd_num(a);}
              lcd_cmd(y);
              lcd_data('8');
              if(Q!=1)
             {W=(10*a)+8;}
              else if(Q=1)
             {D=(10*a)+8;}
              q++;
              a=8;
              _delay_ms(500);
    			 }
		     else if(A==9)
		        {
			     if(q=1) 
             {lcd_cmd(y-1);
              lcd_num(a);}
             if(q=3)
            { lcd_cmd(y-1);
              lcd_num(a);}
              lcd_cmd(y);
              lcd_data('9');
              if(Q!=1)
             {W=(10*a)+9;}
              else if(Q=1)
             {D=(10*a)+9;}
              q++;
              a=9;
              _delay_ms(500);
    			 }
		     else if(A==10)
		        {
		         lcd_cmd(0x01);
				 _delay_ms(10);
				 lcd_cmd(y);
		         lcd_data('+');
		     	S=A;
				Q=1;
				a=0;
				}
			 else if(A==11)
		        {
		         lcd_cmd(0x01);
				 _delay_ms(10);
				 lcd_cmd(y);
		         lcd_data('-');
		     	S=A;
				Q=1;
				a=0;
				}
             else if(A==12)
		        {
		         lcd_cmd(0x01);
				 _delay_ms(10);
				 lcd_cmd(y);
		         lcd_data('X');
 		     	S=A;
				Q=1;
				a=0;
				}
             else if(A==13)
		        {
		         lcd_cmd(0x01);
				 _delay_ms(10);
				 lcd_cmd(y);
		         lcd_data('/');
		     	S=A;
				Q=1;
				a=0;
				}		
	     	 else if(A==15)
	           {
			    lcd_cmd(y-8);
	            lcd_num(W);
                if(S==10)
				   {lcd_cmd(y-7);
	                lcd_data('+');
				     E=add(W,D); }
	             else if(S==11)
                   {lcd_cmd(y-7);
	                lcd_data('-');
					 E=subtract(W,D); }
			     else if(S==12)
                   {lcd_cmd(y-7);
	                lcd_data('X');
					 E=multiply(W,D); }
				 else if(S==13)
                   {lcd_cmd(y-7);
	                lcd_data('/');
					 E=divide(W,D); } 
				lcd_cmd(y-5);
	            lcd_num(D);
  				lcd_cmd(y-4);
	            lcd_data('=');
				lcd_cmd(y);
	            lcd_num(E);
			    }
	       else if(A==16)
	           {
			   lcd_cmd(0x01);
			   _delay_ms(10);
			    lcd_cmd(0xcf);
                lcd_data('0');
			    W=0;
                S=0;
				D=0;
				E=0;
				Q=0;
				q=0;
				a=0;
			   }   	
		}
     
   }
}

void twodigitdisplay (int A)
{
 int B,Q=0,q=0,a=0,temp=0;
 int W,S,D;
 int y=0xcf;
 float E;
    
 				}

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
 int A,B,Q=0,q1=0,q2=0,a=0,temp=0;
 int y=0xcf;
 DDRC=0xff;
 DDRA=0xf0;
 lcd_init();
 lcd_cmd(0x01);
 _delay_ms(10);
  while(1)
   {
    int W=0,S=0,D=0,Q=0,q1=0,q2=0,a=0;
	float E=0;
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
	lcd_cmd(0xcf);
     lcd_data('0');
      while (PORTA!=0xff)
	    {
		  int A=Keypad ();
		    if(A==0)
		       {lcd_cmd(0x01);
                _delay_ms(10);
			  if((q1=0)&&(Q!=1)) 
                {W=0;}
               else if((q2=0)&&(Q=1)) 
                {D=0;}
                    if(Q!=1)
                    {W=(10*W)+0;}
              		else if(Q=1)
             		{D=(10*D)+0;}
                         lcd_cmd(y);
						  if(Q!=1)
                         {lcd_num(W);
						  	q1++;}
						  else if(Q=1)
             		     {lcd_num(D);
						    q2++;}
					    	_delay_ms(500);     
         	    }
            else if(A==1)
		        {lcd_cmd(0x01);
                _delay_ms(10);
		        if((q1=0)&&(Q!=1)) 
                 {W=1;}
                else if((q2=0)&&(Q=1)) 
                 {D=1;}
                    if(Q!=1)
                    {W=(10*W)+1;}
                    else if(Q=1)
                    {D=(10*D)+1;}
                        lcd_cmd(y);
						  if(Q!=1)
                         {lcd_num(W);
						  	q1++;}
						  else if(Q=1)
             		     {lcd_num(D);
						    q2++;}
					    	_delay_ms(500);     
                }
    	     else if(A==2)
		        {lcd_cmd(0x01);
                _delay_ms(10);				
		        if((q1=0)&&(Q!=1)) 
                 {W=2;}
                else if((q2=0)&&(Q=1)) 
                 {D=2;}
			        if(Q!=1)
                    {W=(10*W)+2;}
                    else if(Q=1)
                    {D=(10*D)+2;}  
                        lcd_cmd(y);
						  if(Q!=1)
                         {lcd_num(W);
						  	q1++;}
						  else if(Q=1)
             		     {lcd_num(D);
						    q2++;}
                           _delay_ms(500);
          		 }
		     else if(A==3)
		   		{lcd_cmd(0x01);
                _delay_ms(10);		   		  
		       if((q1=0)&&(Q!=1)) 
                {W=3;}
               else if((q2=0)&&(Q=1)) 
                {D=3;}
			        if(Q!=1)
                    {W=(10*W)+3;}
                    else if(Q=1)
                    {D=(10*D)+3;}  
                       lcd_cmd(y);
						  if(Q!=1)
                         {lcd_num(W);
						  	q1++;}
						  else if(Q=1)
             		     {lcd_num(D);
						    q2++;}
          				  _delay_ms(500);
          		       }
			 else if(A==4)
		   		{lcd_cmd(0x01);
                _delay_ms(10);
		       if((q1=0)&&(Q!=1)) 
                {W=4;}
               else if((q2=0)&&(Q=1)) 
                {D=4;}
                 if(Q!=1)
                  {W=(10*W)+4;}
                 else if(Q=1)
                  {D=(10*D)+4;}
                      lcd_cmd(y);
						  if(Q!=1)
                         {lcd_num(W);
						  	q1++;}
						  else if(Q=1)
             		     {lcd_num(D);
						    q2++;}
                        _delay_ms(500);
    			 }
			 else if(A==5)
		  	    {lcd_cmd(0x01);
                _delay_ms(10);
		       if((q1=0)&&(Q!=1)) 
                {W=5;}
               else if((q2=0)&&(Q=1)) 
                {D=5;}
                 if(Q!=1)
                  {W=(10*W)+5;}
                 else if(Q=1)
                  {D=(10*D)+5;}
                      lcd_cmd(y);
						  if(Q!=1)
                         {lcd_num(W);
						  	q1++;}
						  else if(Q=1)
             		     {lcd_num(D);
						    q2++;}
                        _delay_ms(500);
    			 }
		     else if(A==6)
		        {lcd_cmd(0x01);
                _delay_ms(10);
		       if((q1=0)&&(Q!=1)) 
                {W=6;}
               else if((q2=0)&&(Q=1)) 
                {D=6;}
                 if(Q!=1)
                  {W=(10*W)+6;}
                 else if(Q=1)
                  {D=(10*D)+6;}
                      lcd_cmd(y);
						  if(Q!=1)
                         {lcd_num(W);
						  	q1++;}
						  else if(Q=1)
             		     {lcd_num(D);
						    q2++;}
				  _delay_ms(500);
    			 }
	         else if(A==7)
		        {lcd_cmd(0x01);
                _delay_ms(10);
		       if((q1=0)&&(Q!=1)) 
                {W=7;}
               else if((q2=0)&&(Q=1)) 
                {D=7;}
                 if(Q!=1)
                  {W=(10*W)+7;}
                 else if(Q=1)
                  {D=(10*D)+7;}
                          lcd_cmd(y);
						  if(Q!=1)
                         {lcd_num(W);
						  	q1++;}
						  else if(Q=1)
             		     {lcd_num(D);
						    q2++;}
       					  _delay_ms(500);
    			 }
		     else if(A==8)
		        {lcd_cmd(0x01);
                _delay_ms(10); 
		       if((q1=0)&&(Q!=1)) 
                {W=8;}
               else if((q2=0)&&(Q=1)) 
                {D=8;}
                 if(Q!=1)
                  {W=(10*W)+8;}
                 else if(Q=1)
                  {D=(10*D)+8;}
                       lcd_cmd(y);
						  if(Q!=1)
                         {lcd_num(W);
						  	q1++;}
						  else if(Q=1)
             		     {lcd_num(D);
						    q2++;}
					  _delay_ms(500);
    			 }
		     else if(A==9)
		        {lcd_cmd(0x01);
                _delay_ms(10);
		       if((q1=0)&&(Q!=1)) 
                {W=9;}
               else if((q2=0)&&(Q=1)) 
                {D=9;}
                 if(Q!=1)
                  {W=(10*W)+9;}
                 else if(Q=1)
                  {D=(10*D)+9;}
                      lcd_cmd(y);
						  if(Q!=1)
                         {lcd_num(W);
						  	q1++;}
						  else if(Q=1)
             		     {lcd_num(D);
						    q2++;}
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
			    lcd_cmd(y-6-q1-q2);
	            lcd_num(W);
                if(S==10)
				   {lcd_cmd(y-6-q2);
	                lcd_data('+');
				     E=add(W,D); }
	             else if(S==11)
                   {lcd_cmd(y-6-q2);
	                lcd_data('-');
					 E=subtract(W,D); }
			     else if(S==12)
                   {lcd_cmd(y-6-q2);
	                lcd_data('X');
					 E=multiply(W,D); }
				 else if(S==13)
                   {lcd_cmd(y-6-q2);
	                lcd_data('/');
					 E=divide(W,D); } 
				lcd_cmd(y-5-q2);
	            lcd_num(D);
  				lcd_cmd(y-5);
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



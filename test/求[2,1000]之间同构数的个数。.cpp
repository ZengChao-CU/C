#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,c,d=0;
  for(a=2;a<=1000;a++)
  {
  	b=a*a;
  	if(a<10) 
  c=b%10;
  	if(a>=10&&a<100)
  	c=b%100;
	  if(a>=100&&a<1000)
	  c=b%1000;
	  if(a==c)
	   d=d+1;
	  }	
	  printf("%d",d);
	return 0;
 } 

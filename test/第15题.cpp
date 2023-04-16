#include<stdio.h>
int main()
{
int a,s=0;
for(a=1;a<50;a++)
{
	s=s+100+(2*a-1);
	if(s>3000)
	break;
	}	
	printf("%d",a);
	return 0;
 } 

#include<stdio.h>
int main()
{
	int a,c=20677,b=42067,max;
	for(a=1;a<=20677;a++)
	{
		if(c%a==0&&b%a==0)
		max=a;
	 } 
	 printf("max=%d",max);
	return 0;
 } 

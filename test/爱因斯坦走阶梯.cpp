#include<stdio.h>
int main()
{
	int a,b=0;
	for(a=1;a<=10000;a++)
	{
		if(a%3==2&&a%4==3&&a%5==4&&a%6==5&&a%7==0)
		b=b+1;
		if(b>=3)
		break;
	} 
	printf("%d",a);
	return 0;
 } 

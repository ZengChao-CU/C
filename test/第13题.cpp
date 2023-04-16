#include<stdio.h>
int main()
{
	int a,s=0;
	for(a=1;a<=50;a++)
	{
		s=s+100+2*a;
		if(s>2000)
		break;
	}
	printf("%d",a);
	return 0;
 } 

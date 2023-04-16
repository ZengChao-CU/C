#include<stdio.h>
int main()
{
	int a,s=0;
	for(a=1;a<=100;a++)
	{
		s=s+(1+a)*a/2;
		if(s>=1000)
		break; 
	}
	printf("%d",a-1);
	return 0;
 } 

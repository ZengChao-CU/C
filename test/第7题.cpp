#include<stdio.h>
int main()
{
	int a,s=0;
	for(a=1;a<=100;a++)
	{
		s=s+(1/a);
		if(s>3.6)
		printf("%d",a);
	}
	printf("%d",a); 
	return 0;
 } 

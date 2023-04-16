#include<stdio.h>
int main()
{
	int n;
	float s=0;
	for(n=1;n<100;n++)
	{
			s=s+1/n;
		if(s>3.5)break;
	}
	printf("%d",n);
	return 0;
 } 

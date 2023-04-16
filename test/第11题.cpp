#include<stdio.h>
int main()
{
	int n,s=0;
	for(n=1;n<100;n++)
	{
		s=s+n*n*n;
		if(s>30000)
		break;
	}
	printf("%d",n);
	return 0;
 } 

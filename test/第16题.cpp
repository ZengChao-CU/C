#include<stdio.h>
int main()
{
	int a,s=0;
	for(a=1;a<=100;a++)
	{
		s=s+a*(a+1);
		if(s>=5000)
		break;
	}
	printf("%d",a-1);
	return 0;
 } 

#include<stdio.h>
int main()
{
	int a,s=0;
	for(a=10;a<=1000;a++)
	{
		if(a%6==0&&a%9!=0)
		s=s+a;
	}
	printf("%d",s);
	return 0;
 }

#include<stdio.h>
int main()
{
	int a,n=0;
	for(a=10;a<=1000;a++)
	{
		if(a%6==0&&a%9!=0||a%9==0&&a%6!=0)
		n=n+1;
	} 
	printf("%d",n);
	return 0;
 } 

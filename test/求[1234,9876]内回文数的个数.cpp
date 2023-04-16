#include<stdio.h>
int main()
{
	int a,b,c,d,x,n=0;
	for(x=1234;x<=9876;x++)
	{
		a=x/1000;
		b=(x/100)%10;
		c=(x/10)%10;
		d=x%10;
		if(a==d&&b==c)
		 n=n+1;
	}
	printf("%d",n);
	return 0;
 } 

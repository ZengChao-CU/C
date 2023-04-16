#include<stdio.h>
int main()
{
	int a=1,b=4,c,n;
		for(n=3;n<=100;n++)
		{
			c=3*b-a;
			a=b;
			b=c;
			if(c>=7654321)
			break;
		}
		n=n-1;
		printf("%d",n); 
	return 0;
}

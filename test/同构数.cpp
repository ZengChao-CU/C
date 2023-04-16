#include<stdio.h>
int main()
{
	int a;
	float b,c=0; 
	for(a=2;a<=99999;a++)
	{
		if(a<10)
		b=(a*a)%10;
		if(a>=10&&a<100)
		b=(a*a)%100;
		if(a>=100&&a<1000)
		b=(a*a)%1000;
		if(a>=1000&&a<10000)
		b=(a*a)%10000;
		if(a>=10000&&a<100000)
		b=(a*a)%100000;
		c=c+1;
	}
	printf("%f %f",b,c);
	return 0;
}

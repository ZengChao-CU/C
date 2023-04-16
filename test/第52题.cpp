#include<stdio.h>
int main()
{
	float a=1,b,c,n=0;
for(c=1;c<=20;c++)
	{
		b=1/(a+1);
		a=b;
		if(b<0.618)
		n=n+1;
}
	 printf("%f     ",n);
	return 0;
}

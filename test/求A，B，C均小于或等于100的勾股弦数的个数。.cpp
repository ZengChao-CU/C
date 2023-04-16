#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g=0;
	for(a=1;a<=100;a++)
	{
		for(b=1;b<=100;b++)
		{
		for(c=1;c<=100;c++)
			{
				d=a*a;
				e=b*b;
				f=c*c;
				if(a>b&&b>c&&d==e+f)
				g=g+1;
			}
		}
	}
	printf("%d",g);
	return 0;
 } 

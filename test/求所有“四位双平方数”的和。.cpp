#include<stdio.h>
int main()
{
	int a,b,c,d,e,x,n,m,s=0;
	for(x=1000;x<=9999;x++)
	{
		for(n=1;n<100;n++)
		{
			for(m=1;m<100;m++)
			{ 
				a=x/1000;
		 		b=(x/100)%10;
				c=(x/10)%10;
				d=x%10;
				e=a+b+c+d;
				if(x==n*n&&e==m*m) 
				s=s+x;
		}
	        }
	} 
	printf("%d",s);
	return 0;
 } 

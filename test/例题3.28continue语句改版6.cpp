#include<stdio.h>
int main()
{
	int n=999,s=0;
	int a,b,c,d,i;
	for( ; ; )
	{
	n=n+1;
	a=int(n/100);
	b= int(n/100%10);
	c=int(n%100/10);
	d=int(n%10);
	i=a+b+c+d;
		if(n>10000)break;
		if(n%8!=0&&n%7!=0)continue;
		if(i%2!=0)
		{
				printf("%d,",n);
				s=s+1;
	}
	
}
	printf("%d,  ",s);
	return 0;
}

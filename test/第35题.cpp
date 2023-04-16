#include<stdio.h>
int main()
{
	int a,b=2,max;
	for(a=2;a<233479;a++)
	{
		if(233479%a==0&&a>b)
		/*printf("%d\n",a);*/ 
		b=a;
	}
	printf("%d",b);
	return 0;
}

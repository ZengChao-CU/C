#include<stdio.h>
int main()
{
	int a,b=2,max;
	for(a=2;a<203267;a++)
	{
		if(203267%a==0&&a>b)
		/*printf("%d\n",a);*/ 
		b=a;
	}
	printf("%d",b);
	return 0;
}

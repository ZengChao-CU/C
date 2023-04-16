#include<stdio.h>
int main()
{
	int n=0;
	for(;;)
	{
		n=n+1;
		if(n%9!=0)continue;
		printf("%d,",n);
		if(n>100)break;
	}
	return 0;
}

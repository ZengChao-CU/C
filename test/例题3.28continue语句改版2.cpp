#include<stdio.h>
int main()
{
	int n=0;
	for(;;)
	{
		if(n%9!=0)continue;
		printf("%d,",n);
		if(n>100)break;
			n=n+1;
	}
	return 0;
}

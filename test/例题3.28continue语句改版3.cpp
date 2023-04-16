#include<stdio.h>
int main()
{
	int n=999;
	for(;;)
	{
		n=n+1;
		if(n%8!=0)continue;
		printf("%d,",n);
		if(n>10000)break;
	}
	return 0;
}

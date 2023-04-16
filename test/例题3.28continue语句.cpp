#include<stdio.h>
int main()
{
	int n;
	for(n=9;n<=100;n++)
	{
		if(n%9!=0)continue;
		printf("%d,",n);
	}
	return 0;
}

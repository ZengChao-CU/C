#include<stdio.h>
int main()
{
	int n=999;
	int s=0; 
	for(;;)
	{
		n=n+1;
		if(n%8!=0)continue;
	s=s+1;
		if(n>10000)break;
	}
		printf("%d,",s);
	return 0;
}

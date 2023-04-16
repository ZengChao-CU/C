#include<stdio.h>
int main()
{
	int n=999,s=0; 
	for(;;)
	{
		n=n+1;
		if(n%8!=0&&n%7!=0)continue;
		s=s+1;
		if(n>10000)break;
	}
	printf("%d,",s);
	return 0;
}

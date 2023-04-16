#include<stdio.h>
int main()
{
		int a,b=559399;
	for(a=2;a<559399;a++)
	{
		if(559399%a==0&&a<b)
		b=a;
	}
	printf("%d",b);
	return 0;
}

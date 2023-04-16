#include<stdio.h>
int main()
{
	int a,b=1,s;
	for(a=1;a>=1;a++)
	{
		b=b*2;
		s=(1-b)/(1-2);
		if(s>100000)
		break;
	}
	printf("%d",a);
	return 0;
}

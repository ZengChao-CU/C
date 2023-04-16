#include<stdio.h>
int main()
{
	int a,b=1,s;
	for(a=1;a>=1;a++)
	{
		b=b*3;
		s=(1-b)/(1-3);
		if(s>=9876543)
		break;
	}
	printf("%d",a-1);
	return 0;
}

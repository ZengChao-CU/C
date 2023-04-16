#include<stdio.h>
int main()
{
	float a,s=1;
	for(a=1;a>=1;a++)
	{
		s=s*(1+0.04);
		if(s>=2)
			break;
	}
	printf("%f",a);
	return 0;
}

#include<stdio.h>
int main()
{
	float a,s=0;
	for(a=1;a<=100;a++)
	{
		s=s+1/((1+a)*a/2);
		if(s>=1.9)
		break;
	}
	printf("%f",a-1);
	return 0;
}

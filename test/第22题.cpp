#include<stdio.h>
int main()
{
	float a,s=0; 
	for(a=1;a<=100;a++)
	{
		s=s+1/(a*(2*a-1));
		if(s>1.35)
		break;
	}
	printf("%f",a);
	return 0;
}

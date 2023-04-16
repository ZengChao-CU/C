#include<stdio.h>
int main()
{
	float a,c,b=1,s=0;
	for(a=1;a<=100;a++)
	{
		b=a*b;
		c=1/b;
		s=s+c;
		if(s>=1.71828)
		break;
	 } 
	 printf("%f",a);
	return 0;
}

#include<stdio.h>
int main()
{
	float a,b,s=0;
	for(a=1;a<=100;a++)
	{
	b=2*a-1;
	if(b<=100)
	s=s+(1/b-1/(b+1)); 
	if(s>0.68)
	break;
	 } 
	 b=b-2;
	 printf("%f",b);
	return 0;
}

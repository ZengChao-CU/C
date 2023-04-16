#include<stdio.h>
int main()
{
	float a,s=0; 
	for(a=1;a<=100;a++)
	{
		s=s+1/(a*a);
		if(s>=1.6)
		break;
	 } 
	 printf("%f",a-1);
	return 0;
}

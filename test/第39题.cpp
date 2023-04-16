#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	float s=0;
	for(a=1;a<=100;a++)
	{
		if(a%6==0||a%8==0)
		s=s+sqrt(a)*sqrt(a);
	 } 
	 printf("%f",s); 
	return 1;
}

#include<stdio.h>
int main()
{
	int a,max=2;
	for(a=2;a<=179869;a++)
	{
			if(179869%a==0&&196037%a==0&&a>max)
			max=a;
	 } 
	 printf("%d",max);	
	return 0;
}

#include<stdio.h>
int main()
{
	int a,max=2;
	for(a=2;a<=20677;a++)
	{
			if(20677%a==0&&42067%a==0&&a>max)
			max=a;
	 } 
	 printf("%d",max);
	return 0;
}

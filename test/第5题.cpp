#include<stdio.h>
int main()
{
	int a,s=0;
	for(a=101;a<=299;a++)
	{
		if(a%2==0&&a%3!=0||a%2==0&&a%5!=0)
		s=s+a;
	}
	 printf("%d",s);
	return 0;
 }  

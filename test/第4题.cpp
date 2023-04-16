#include<stdio.h>
int main()
{
	int a,n=0;
	for(a=100;a<=800;a++)
	{
		if(a%5!=0&&a%7!=0)
		n=n+1;
	 } 
	 printf("%d",n);
	return 0;
 } 

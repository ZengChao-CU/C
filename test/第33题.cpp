#include<stdio.h>
int main()
{
	int a,s=0;
	for(a=2;a<45678;a++)
	{
		if(45678%a==0&&a%2!=0)
		s=s+1;
	}
	
	printf("%d",s);
	return 0;
}

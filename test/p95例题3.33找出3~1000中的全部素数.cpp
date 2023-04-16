#include<stdio.h>
#include<math.h>
int main()
{
	unsigned int i,j,count,flag;
	count=0;
	for(i=3;i<=1000;i++)
{
	flag=0;
	for(j=2;j<=sqrt(i);j++)
	{
		if(i%j==0)
		{
			flag=1;break;
		}
	}
	if(flag==0)
	{
		printf("%4d",i);
		count++;
		if(count%8==0)printf("\n");
	}
}
	return 0;
}

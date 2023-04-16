#include<stdio.h>
int main()
{
	int s=0,i=1;
	for(; ;  )
	{
		s=s+i;
		i++;
		if(i>100)break;
	}
	printf("s=%d",s);
	return 0;
}

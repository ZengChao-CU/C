#include<stdio.h>
int main()
{
	int P,Q,H,W,S,A,B,C,D,E,F,G,I;
	printf("command: 0=eat 1=drink 2=watch 3=shopping");
	scanf("%d",&P);
	switch(P)
	{
		case 0:printf("A=rice  B=noodles");
		scanf("%s",&Q);
		if(Q==A)
		{
			printf("%s",A);
		}
		else
		printf("%s",B);
		break;
		case 1:printf("C=milky tea   D=tea");
		scanf("%s",&H);
		if(H==C)
		{
			printf("%s",C);
		}
		else
		printf("%s",D);
		break;
			case 2:printf("E=guipian  F=sibai");
		scanf("%s",&W);
		if(W==E)
		{
			printf("%s",E);
		}
		else
		printf("%s",F);
		break;
		default:printf("G=phone   I=shoubiao");
		scanf("%s",&S);
		if(S=G)
		{
			printf("%s",G);
		}
		else
		printf("%s",I);
		break;
	}
	return 0;
}

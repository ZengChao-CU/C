#include<stdio.h>
int main()
 {
 	 double y; 
 	 double x;
 	 scanf("%f\n",&x);
 	 if(x<=0)
 	 {
 		if(x<=10)
 		y=2*x;
 		else
 		y=2+x;
	 }
	 else
	 {
	 	if(x<=10)
	 	y=x-2;
	 	else
	 	y=x/10;
	 }
	 printf("%f\n",y);
	 
 }

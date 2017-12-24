#include<stdio.h>

main(){
	
	int n,*p; float result=0;
	p=&n;
	printf("enter number to calculate area of circle : "); scanf("%d",&n);
	result = 3.14 * (*p * *p);
	printf("the result is %.2f",result);
	
}

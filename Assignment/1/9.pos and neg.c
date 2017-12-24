#include<stdio.h>

main(){
	int n;
	printf("this program check for positive or negative\n");
	printf("enter number : "); scanf("%d",&n);
	if(n%2==0){
		printf("this is positive");
	}
	else if(n<0){
		printf("this is negative");
	}
	else
		printf("this is negative");
}

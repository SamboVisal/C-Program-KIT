#include<stdio.h>

main(){
	int n;
	printf("check the given number odd or even\n");
	printf("enter number to check : "); scanf("%d",&n);
	if(n<0){
		printf("positive number only");
	}
	else if(n%2==0){
		printf("this is even number");
	}
	else{
		printf("this is odd");
	}
}

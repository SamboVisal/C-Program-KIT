#include<stdio.h>
int factorial();
main(){
	int n,num;
	printf("Input positive number : "); scanf("%d",&n);
	factorial(n);	
	printf("Factorial is %ld",factorial(n));
}
int factorial(int n){
		
	while(n!=0){
		return n * factorial(n-1);
	}	
	
	return 1;
}

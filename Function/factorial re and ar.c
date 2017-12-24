#include<stdio.h>
long factorial();
main(){
	int n,num;
	printf("Input positive number : "); scanf("%d",&n);
	factorial(n);	
	printf("Factorial is %ld",factorial(n));
}
long factorial(int n){
		
	while(n!=0){
		return n * factorial(n-1);
	}	
	
	return 1;
}

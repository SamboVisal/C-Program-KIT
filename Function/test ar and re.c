#include<stdio.h>
int prime(int n);
main(){
	int n;
	printf("Input Positive Number : "); scanf("%d",&n);
	prime(n);
	if(prime(n)==1){
		printf("Not prime number");
	}
	else
		printf("Prime");
}
int prime(int num){
	int i;
	for(i=2; i<=num/2; i++){
		if(num%i==0){
			return 1;
		}
		
	}
	return 0;
	
}

#include<stdio.h>
void prime(int i);
main(){
	int i;
	printf("Input positive number : "); scanf("%d",&i);
	prime(i);
	return 0;
}
void prime(int n){
	int k,c;
	for(k=2; k<=n/2; k++){
		if(n%2==0){
			c=1;
		}
	}
	if(c==1){
		printf("This is not prime number");
	}
	else
		printf("This is prime number");
}

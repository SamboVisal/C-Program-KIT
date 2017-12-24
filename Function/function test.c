#include<stdio.h>


main(){
	int pri,c,n;
	printf("Input Positive Number : "); scanf("%d",&n);
	pri=prime(n);
	if(pri==1)
	printf("%d is not prime number",n);
	else
	printf("%d is prime number",n);
}

int prime(int p){
	int i;
	i=p/2;
	i=p%i;
	return i;
}

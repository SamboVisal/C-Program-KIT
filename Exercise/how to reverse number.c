#include<stdio.h>

main(){
	long n; int reverse=0,remainder;
	printf("Input the reverse number : "); scanf("%ld",n);
	do{
		
		remainder=n%10;
		reverse=reverse*10+remainder;
		n=n/10;
		
	}while(n!=0);
	printf("The reverse number is %ld",reverse);
	
	
	
	
}

//Program to find to sum of digits of a number
#include<stdio.h>

main(){ long n; int rev=0,remainder;
		printf("Input value to reverse : "); scanf("%ld",&n);
		do{
			
			remainder=n%10;
			rev=rev+remainder;
			n=n/10;
			
		}while(n!=0);
		printf("The reverse number is %d ",rev);
}


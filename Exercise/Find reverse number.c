#include<stdio.h>

main(){ long n; int rev=0,remainder;
		printf("Input value to reverse : "); scanf("%ld",&n);
		do{
			
			remainder=n%10;
			rev=rev*10+remainder;
			n=n/10;
			
		}while(n!=0);
		printf("The reverse number is %d ",rev);
}

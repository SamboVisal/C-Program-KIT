#include<stdio.h>

main(){ long n; int rev=0,remainder,f;
		printf("Input value to know is palindrome or not : "); scanf("%ld",&n);
		f=n;
		do{
			
			remainder=n%10;
			rev=rev*10+remainder;
			n=n/10;
			
		}while(n!=0);
		if(rev==f)
		printf("This is a palindrome number");
		else
		printf("This is not");
}

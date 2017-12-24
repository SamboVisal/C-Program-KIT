#include<stdio.h>
#include<math.h>
void bin(long long b);
main(){
	long long b;
	printf("Input Binary Number : "); scanf("%lld",&b);
	bin(b);
}
void bin(long long b){
	long r=0; int i; int de=0;
	while(b!=0){
		r=b%10;
	    b=b/10;
		de += r*pow(2,i);
		i++;
	}
	printf("The Decimal Value is %d",de);
	
}

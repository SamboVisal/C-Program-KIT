#include<stdio.h>

void fac(int a);
main(){
	int a;
	scanf("%d",&a);
	fac(a);
}
void fac(int a){
	int rem,rev=0;
	while(a>0){
		rem=a%10;
		rev=rev*10+rem;
		a/=10;
	}
	printf("%d",rev);
	
}

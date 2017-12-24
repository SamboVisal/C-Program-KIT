#include<stdio.h>

void fac();
main(){
	
	fac();
	
}
void fac(){
	int a,rem,rev=0;
	printf("Input Number : "); scanf("%d",&a);
	while(a>0){
		
		rem=a%10;
		rev=rev*10+rem;
		a/=10;
	}
	printf("%d",rev);
}

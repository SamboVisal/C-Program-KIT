#include<stdio.h>

void fac(int a);
main(){
	int a;
	scanf("%d",&a);
	fac(a);
}
void fac(int a){
	int c; int rem,rev=0;
	c = a;
	while(a>0){
		rem=a%10;
		rev=rev*10+rem;
		a/=10;
	}
	if(rev==c){
		printf("Yes");
	}
	else{
		printf("No");
	}
}

#include<stdio.h>

int fac(int a);
int main(){
	
	int a;
	printf("Input Number"); scanf("%d",&a);
	fac(a);
	printf("The Number is %d",fac(a));
	
}
int fac(int a){
	int rem,rev=0;
	while(a>0){
		
		rem=a%10;
		rev=rev*10+rem;
		a/=10;
	}
	return rev;
}

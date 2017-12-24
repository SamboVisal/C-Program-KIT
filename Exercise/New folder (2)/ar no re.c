#include<stdio.h>

int str(int n);
main(){
	int n;
	printf("enter number : "); scanf("%d",&n);
	str(n);
}
int str(int n){
	int result=0,re;
	while(n!=0){
		re = n%10;
		n/=10;
		result = result *10 +re;
	}
	printf("%d",result);
	
}

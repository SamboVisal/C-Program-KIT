#include<stdio.h>
int k(int a);
main(){
	
	int a =10; 
	k(a);
	printf("%d",a);
//	printf("%d",k(a));		
}
int k(int b){
	
	b = b + 100;
	return b;
}

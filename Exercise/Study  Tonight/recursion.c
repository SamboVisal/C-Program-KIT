#include<stdio.h>

int fac(int a);
main(){
	int a;
	scanf("%d",&a);
	fac(a);
	printf("%d",fac(a));	
}
int fac(int a){
	
	while(a>0){
		
		return a * fac(a-1); 
		
	}
	return 1;
}

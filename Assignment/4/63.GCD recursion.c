#include<stdio.h>
int num(int n);
main(){
	int n,b;
	printf("enter number for GCD : ");  scanf("%d",&n);
	b=num(n);
	printf("the greatest common division is %d",b);
	
}
int num(int n){
	int c;
	while(n>0){
		
		 n %num(n-1)==0;
		 c=n;
	}
		return c;
	
}

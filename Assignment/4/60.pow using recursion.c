#include<stdio.h>
#include<math.h>
int c(int n,int p);
main(){
	int n,p,num;
	printf("enter number : "); scanf("%d",&n);
	printf("enter number to power : ");  scanf("%d",&p);
	c(n,p);
	printf("the result of %d^%d is %d",n,p,c(n,p));
}
int c(int n,int p){
	int result=1;
	while(p!=0){
	return (n*pow(n,p-1));	
	};	
}

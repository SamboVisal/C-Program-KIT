#include<stdio.h>
int num(int n);
main(){
	int d,n;
	printf("Enter Element : "); scanf("%d",&d);
	num(d);
	printf("%d",num(d));
	
}
int num(int n){
	
	if(n==0){
		return n;
		}
	else{
		
		return n + num(n-1);
		
	}
	return 0;
	
}

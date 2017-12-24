#include<stdio.h>
int result(int n);
int main(){
	int n;
	printf("Input positive number : "); scanf("%d",&n);
	result(n);
	return 0;
}
int result(int d){
	int total=0;
	if(d==0){
		printf("The natural number = %d\n",d);
	}
	else{
		total = d + result(d-1);
		
	}
	printf("The natural number is %d\n",total);
	
}

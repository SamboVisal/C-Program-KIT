#include<stdio.h>

int sum(int *num1,int *num2);
main(){
	int num1=2,num2=5;
	sum(&num1,&num2);
	printf("%d  %d",num1,num2);
}
int sum(int *num1,int *num2){
	
	int tem;
	tem=*num1; *num1=*num2; *num2=tem;
}

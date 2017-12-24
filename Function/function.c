#include<stdio.h>

int add(int a, int b);
main(){
	int num1,num2,sum;
	
	printf("Enter Two Numbers : \n"); 
	scanf("%d %d",&num1,&num2);
	sum=add(num1,num2); // function calling
	printf("Sum=%d",sum);
}
int add(int a, int b)  //function definition
{
	
	// start function definition
	int add;
	add=a+b;
	return add;  // return satement of function
}

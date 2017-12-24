#include<stdio.h>

main(){
	int result,n;	
	printf("Enter positive number : "); scanf("%d",&n);
	result=sum(n);
	printf("The natural is %d",result);
	
}
int sum(int number){
	if(number==0){
		return number;
	}
	else
	return number+sum(number-1);
}


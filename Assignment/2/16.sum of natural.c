#include<stdio.h>

main(){
	int n,result=0;
	printf("Sum of natural number\n");
	printf("enter number : "); scanf("%d",&n);
	while(n!=0){
		result += n;
		n--;
	}
	printf("sum = %d",result);
}

#include<stdio.h>

main(){
	int result=1,n,i;
	printf("this program Factorial\n");
	printf("enter number : "); scanf("%d",&n);
	while(n!=0){
		result= result *n;
		n--;
	}
	printf("this result is %d",result);
}

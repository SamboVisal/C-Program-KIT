#include<stdio.h>

main(){
	int sum=0,*ptr1,*ptr2;
	printf("enter 2 numbers : ");
	scanf("%d",ptr1);
	scanf("%d",ptr2);
	sum = *ptr1 + *ptr2;
	printf("sum = %d",sum);
	return (0);
}

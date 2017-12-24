#include<stdio.h>

main(){
	
	int p=10;
	int *ptr= &p;
//	ptr=&p;
	
	printf("The address of p is %d\n",&p);
	printf("The address of p is %d\n",ptr);
	printf("The address of pointer ptr is %d\n",&ptr);
	
	printf("The value of p is %d\n",p);
	printf("The value of ptr is %d",*ptr);
}

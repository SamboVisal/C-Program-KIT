#include<stdio.h>

main(){
	
	int a =10,b=20,t;
	printf("before swap : \n");
	printf("a = %d , b = %d",a,b);
	printf("after swapping : ");
	t = a;
	a =b;
	b = t;
	printf("a = %d , b = %d",a,b);
}

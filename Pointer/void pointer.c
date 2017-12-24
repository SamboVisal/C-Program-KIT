#include<stdio.h>

main(){
	
	void *ptr;
	int a =20;
	float b=30;
	char c ='a';
    ptr = &a ;
	printf("The value a is %d",*((int*)ptr));
	ptr = &b;
	printf("The value b is %f",*((float*)ptr));
	ptr = &c;
	printf("The value c is %c",*((char*)ptr));
	
}

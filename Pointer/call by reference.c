#include<stdio.h>

int swap(int *x, int *y);
main(){
	
	int a=100,b=200;
	printf("The value of A is %d\n",a);
	printf("The valus of B is %d\n",b);
	printf("After Swapping\n");
	swap(&a,&b);
	printf("The value of A is %d\n",a);
	printf("The valus of B is %d\n",b);
}
//passing address as parameter
int swap(int *x, int *y){
	
	int temp;
	temp=*x;
	// 
	*x=*y;
	 
	*y=temp;
	return;
	
}

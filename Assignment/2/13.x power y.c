#include<stdio.h>
#include<math.h>
main(){
	int result=0,x,y;
	printf("Calculate x to the power y\n");
	printf("enter x : "); scanf("%d",&x);
	printf("enter square y : "); scanf("%d",&y);
	result = pow(x,y);
	printf("the square of x and y is %d ",result);
}

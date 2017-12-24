#include<stdio.h>
float n,r,pa,SI;
main(){
	
	printf("Find simple of interest\n");
	printf("input number of year : "); scanf("%f",&n);
	printf("input number rate of interest : "); scanf("%f",&r);
	printf("input value of principle amount : "); scanf("%f",&pa);
	SI=(n*r*pa)/100;
	printf("the value of simple interest is : %.02f",SI);
	
}


#include<stdio.h>

main(){ int a,b,c;
	
	printf("Input Value A : "); scanf("%d",&a);
	printf("Input Value B : "); scanf("%d",&b);
	printf("Input Value C : "); scanf("%d",&c);
	if(a>=b && a>=c)
		printf("A is the biggest number");
	
	if(b>=a && b>=c)
		printf("B is the biggest number");
	
    if(c>=a && c>=b)
		printf("C is the biggest number");
	return 0;
	
}

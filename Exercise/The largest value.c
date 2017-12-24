#include<stdio.h>

main(){  int a,b,c,result;
n	
	printf("Input value of A : "); scanf("%d",&a);
	printf("Input value of B : "); scanf("%d",&b);
	printf("Input value of C : "); scanf("%d",&c);	
	result = a>b? a>c? a : c : b>c ? b:c;  
	printf("the largest value is %d is %c",result,a>b? a>c? 'a' : 'c' :b>c ? 'b':'c');
}

/*this program will swap the number of the input*/
#include<stdio.h>

main(){int c,a,b;
	printf("Input the value to swap\n");
	printf("Input the value of A: \n"); scanf("%d",&a);
	printf("Input the value of B: \n"); scanf("%d",&b);
/*	if(a!=b){*/
		
		c=a;
		a=b;
		b=c;
		printf("The value of a is %d\n",a);	
		printf("The value of b is %d\n",b);		
	//}
/*	else{
		
		printf("the value a is %d\n",a);
		printf("the value b is %d\n",b);
		
	}*/
	
	
}

#include<stdio.h>

main(){
	int *pc;
	int c;
	c=22;	
	printf("Address of C is %d\n",&c);
	printf("Value of C is %d\n",c);
	pc=&c;
	printf("Address of pointer pc is %d\n",&pc);
	printf("Value of pointer pc is %d\n",*pc);
	c=11;
	printf("Address of pointer pc is %d\n",&pc);
	printf("Value of pointer pc is %d\n",*pc);
	*pc=2;
	printf("Address of C is %d\n",&c);
	printf("Value of C is %d\n",c);
}

#include<stdio.h>

main(){ char c;
	puts("Input the grade score : ");
	c=getchar();
	fflush(stdin);
	if(c=='A')
	   printf("HRA percent is 45");
	   else if(c=='B')
	   printf("HRA percent if 40");
	   else if(c=='c')
	   printf("HRA percent is 30");
	   else if(c=='D')
	   printf("HRA percent is 25");
	   else
	   printf("Please input the valid letter");
	
	
}

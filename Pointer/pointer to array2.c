#include<stdio.h>

main(){
	
	char c[4];
	int i;
	for(i=0;i<4;i++){
		//%x will present xeha decimal number, we have to use CHAR data-type
		printf("Address of c[%d]=%x\n",i,&c[i]);
	}
	
}

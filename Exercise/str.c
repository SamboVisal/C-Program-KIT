#include<stdio.h>
#include<conio.h>

main(){
	int i,j,b;
	
	for(i=1;i<=5;i++){
		
		printf("\n");
		for(b=5;b>=i;b--)
		printf(" ");
		for(j=1;j<=i;j++){
			
			printf("*");
			
		}
		
	}
	
	
	
}

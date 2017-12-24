/*This program will show the number each time of the value of digit */
#include<stdio.h>
main(){
/*	int i,j;
	for(i=1;i<=5;i++){
		
		printf("\n");
	
	for(j=1;j<=i;j++)
	       { 
		      printf("%d",i);
		
		   }
	                 }  */
	int i,j,s;
	for(i=5;i>=0;i--){
		
		printf("\n");
		for(s=5;s>i;s--)
			printf(" ");
	
	for(j=1;j<=i;j++)
	       { 
		      printf("%d",i);
		
		   }
	                 }
	
	
}

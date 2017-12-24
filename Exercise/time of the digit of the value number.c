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
	int b=7;
	for(i=1;i<=b;i++){
		printf("\n");
	for(s=b;s>i;s--){
		printf(" ");
          }
	for(j=1;j<=i*2-1;j++)
	              { 
		      printf("*");
		
		          }
		printf("\n");
		   
		   
	}
	
	
}

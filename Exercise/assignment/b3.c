#include<stdio.h>

main( ){
        char x,z;
	printf("ascii code of X : \n"); scanf("%c",&x);
 	printf("ascii code of x : \n"); scanf("%c",&z);
	printf("the ascii code of X is %c=%d\n",x,x);
	printf("the ascii code of x is %c=%d",z,z);
	  
	if ( 'X' < 'x' ){
	
	printf ( "\nascii value of X is smaller than that of x\n" ) ; 
          }
    else{
    	printf("ascii value of x is smaller than that of X");
	}      
          
}

#include<stdio.h>

main( ) 
	{  
	int  a[ ] = { 10, 20, 30, 40, 50 } ;   
	int  *j,i ;  j = a ;  
	/* store the address of zeroth element */  
	//j = j + 2 ; 
	for(i=0; i<=4; i++){
	printf ( "\n%d", *j ) ;
	j++;	
	} 
	 
	}  


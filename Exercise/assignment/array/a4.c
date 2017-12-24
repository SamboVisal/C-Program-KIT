#include<stdio.h>
/*
main( ) 
	{  
	int  size ;  
	scanf ( "%d", &size ) ;  
	int  arr[size],i ;  
	for ( i = 1 ; i <= size ; i++ )  
	{    
	scanf ( "%d",& arr[i] ) ;   
	printf ( "%d", arr[i] ) ;  
	}  
	} 
*/
/*
main( ) 
	{  
	int  i, a = 2, b = 3 ;  
	int  arr[ 2 + 3 ] ;  
	for ( i = 0 ; i < a+b ; i++ )  
	{    
	scanf ( "%d", &arr[i] ) ;   
	printf ( "\n%d", arr[i] ) ;  
	}  
	} 
*/
main( ) 
	{  
	int  b[ ] = { 10, 20, 30, 40, 50 } ;   
	int  *ptr = b;
	int  i ;  
	for ( i = 0 ; i <= 4 ; i++ )   
	printf ( "\n%d", *( ptr + i ) ) ; 
	}  




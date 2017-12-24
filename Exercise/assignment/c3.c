#include<stdio.h>

main( ) 
	{  
	int   i = -1, 
	j = 0, k = 1, w, x, y, z ;  
	w = i || j || k ;  
	x = i || j && k ;  
//	y = i || j && k ;  
//	z = i && j || k ;  
	printf ( "\nw = %d x = %d y = %d z = %d", w, x, y, z ) ; 
	}  


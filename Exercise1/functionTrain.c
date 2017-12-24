#include<stdio.h>

/*function to accept and display a character*/
main(){
	char alph;
	alph=getc (stdin); /*accept a character*/
	fflush(stdin); /*clear the stdin buffer*/
	putc(alph, stdout); /*display a character*/
	
}

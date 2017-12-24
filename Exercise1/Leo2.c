#include<stdio.h>
//write a function to input a character and display the character input twice
main(){
	char d;
	d=getchar();
	fflush(stdin); //clear buffer
	putc(d,stdout);
	putc(d,stdout); 
}

/*this program will find the vowel and consonant*/
#include<stdio.h>
#include<conio.h>
main(){ char ch;
	
	printf("Input the character : "); 
	ch=getchar();
	fflush(stdin);
	switch(ch){
		case 'A' : 
		case 'a' : 		
		case 'E' : 
		case 'e' : 
		case 'I' : 
		case 'i' : 
		case 'o' : 
		case 'O' : 
		case 'u' : 
		case 'U' : 
					printf("The character is vowel"); break;
		default :   printf("The Character is consonant");
	          }
	
	
	
}

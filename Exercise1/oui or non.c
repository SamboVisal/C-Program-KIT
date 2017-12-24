#include<stdio.h>
#include<conio.h>
char ch;
main(){
do{
	
	printf("Give me the answer : Oui or Non\n"); 
	ch=getchar();
	switch(ch){
		case 'o' : printf("Good\n"); 
					break;
		case 'n' : printf("Bad\n");
		             break;
		default : printf("try again bitch\n");
		
	          }
			  }
	          while(ch!='o'&&ch!='n');
	
	
}

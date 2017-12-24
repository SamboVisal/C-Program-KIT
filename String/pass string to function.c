#include<stdio.h>
void display(char ch[]);
main(){
	char name[30];
	printf("Enter name : "); gets(name);
	display(name);
}
void display(char ch[]){
	
	printf("Your name is ");
	puts(ch);
	
}

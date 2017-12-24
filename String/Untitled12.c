#include<stdio.h>

void string(char name[]);
main(){
	char name[20];
	gets(name);
	string(name);
}
void string(char name[]){
	
	puts(name);
	
}

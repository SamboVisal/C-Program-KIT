#include<stdio.h>
char f(char name[]);
main(){
	char name[100];
	printf("Input string to count : "); gets(name);
	f(name);
	printf("the amount of string is %d",f(name));	

}
char f(char name[]){
	int i,d;
	
	for(i=0;name[i]!='\0';i++);
	d = i;
	return d;
}

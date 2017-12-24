#include<stdio.h>

char f(char name[]);
main(){
	char name[100];
	printf("enter string : "); gets(name);
	f(name);
	printf("the amount of word is %d",f(name));
	
}
char f(char name[]){
	int i,c=1;
	for(i=0;name[i]!='\0';i++){
		if(name[i]==' ')
		c++;
	}
	return c;
}

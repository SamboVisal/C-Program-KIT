#include<stdio.h>
#include<string.h>
main(){
	char name[100]; int i,c;
	printf("enter string : "); gets(name);
	
	printf("before reverse\n");
	for(i=0;name[i]!='\0';i++){
		printf("%c\t",name[i]);
	}
	printf("\n");
	printf("after reverse\n");
	c=strlen(name);
	for(i=c-1;i>=0;i--){
		printf("%c\t",name[i]);
	}
	
}

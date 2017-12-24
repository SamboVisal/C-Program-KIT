#include<stdio.h>
#include<string.h>
/*
main(){
	
	char name[10],name1[10];
	printf("Enter name : "); gets(name);
	strcpy(name1,name);
	puts(name1);
}
*/
main(){
	char name[10],name2[10],i;
	printf("Enter name : "); gets(name);
	for(i=0; name[i]!='\0'; i++){
		
		name2[i]=name[i];
	}
	name2[i]='\0';
	printf("%s",name2);
}

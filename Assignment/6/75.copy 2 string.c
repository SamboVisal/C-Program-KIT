#include<stdio.h>

main(){
	char name1[100],name2[100]; int i,j=0;
	printf("enter string1 : "); gets(name1);
	for(i=0;name1[i]!='\0';i++){
		name2[j] = name1[i];
		j++; 
	}
	printf("the string2 is copied \n");
	for(i=0;name2[i]!='\0';i++){
		printf("%c",name2[i]);
	}
}

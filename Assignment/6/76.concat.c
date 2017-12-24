#include<stdio.h>
//char con(char name1[],char name2[]);
main(){
	char name1[100],name2[100],c[100];
	printf("enter first string : ");  gets(name1);
	printf("enter second string : "); gets(name2);
		int i,j;
	for(i=0;name1[i]!='\0';i++);
	for(j=0;name2[j]!='\0';j++){
		name1[i]=name2[j];
		i++;
	}
	name1[i]='\0';
	printf("the concate string is %s",name1);
}

#include<stdio.h>


main(){
	char name[100]; int i;
	printf("input string : "); gets(name);
	for(i=0;name[i]!='\0';i++);
	printf("%d",i);
}

#include<stdio.h>

main(){
	char name[100]; int i;
	printf("enter string to count : "); gets(name);
	for(i=1;name[i]!='\0';i++);
	printf("the length is %d",i);
	
	
}

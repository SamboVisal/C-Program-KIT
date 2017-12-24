#include<stdio.h>

main(){
	char name[100]; int c,i;
	char *p;
	p=name;
	printf("enter string : "); gets(name);
	for(i=0;p[i]!='\0';i++);
	c=i;
	printf("amout of string %d",c);
	
}

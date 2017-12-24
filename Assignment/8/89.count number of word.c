#include<stdio.h>


main(){
	char name[100]; int c=0,i;
	char *pointer;
	pointer=name;
	printf("enter string : "); gets(name);
	for(i=0;name[i]!='\0';i++){
		if(name[i]==' ')
		c++;	
	}
	printf("the amount of word is %d",c);
	
}

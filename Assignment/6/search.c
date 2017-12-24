#include<stdio.h>
#include<string.h>
#include<conio1.h>
main(){
	char name[100],search[100],j=0;
	printf("Input text : "); gets(name);
	printf("input word the search : "); scanf("%s",&search);
		if(strcmp(search,name)==0)
		j++;
		
	printf("%d",j);
}

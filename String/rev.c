#include<stdio.h>
#include<string.h>

main(){
	int i,j,l;
	char name[10],temp[10];
	printf("Input name : ");
	gets(name);
	l=strlen(name);
	for(i=l-1,j=0; i>=0;j++, i--){
		temp[j]=name[i];
	}
	printf("%s",temp);
	
}

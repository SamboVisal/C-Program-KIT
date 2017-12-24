#include<stdio.h>
#include<string.h>
main(){
	char name[20]; int ch,i;
	printf("Input name : ");
	gets(name);
	ch=strlen(name);
	printf("The name is %s and length %d\n",name,ch);
	printf("The reverse string  : ");
	for(i=ch-1; i>=0; i--){
		
		printf("%c",name[i]);
	}
	
}

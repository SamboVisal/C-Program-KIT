#include<stdio.h>
#include<string.h>
main(){
	char name[100],a[100],b[100]; int c,i;
	printf("enter string : ");  gets(name);
	strcpy(a,name);
	strcpy(b,strrev(name));
	if(strcmp(a,b)==0){
		printf("this is palindrom\n");
	}
	else{
		printf("this not palindrom");
	}
}

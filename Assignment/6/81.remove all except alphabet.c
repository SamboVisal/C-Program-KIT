#include<stdio.h>
#include<string.h>
main(){
	char name[100]; int i,j;
	printf("enter string : ");  gets(name);
	for(i=0;name[i]!='\0';i++){
		while(!(name[i]>='a' && name[i]<='z' || name[i]=='\0')){
			for(j=i;name[j]!='\0';j++){
				name[j]=name[j+1];
			}
			name[j]='\0';
		}
	}
	for(i=0;name[i]!='\0';i++){
		printf("%c",name[i]);
	}
}

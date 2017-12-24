#include<stdio.h>

main(){
	char name[100]; int i;
	printf("enter name to conver to ascii : "); gets(name);
	for(i=0;name[i]!='\0';i++){
		printf("%d\t",name[i]);
	}
}

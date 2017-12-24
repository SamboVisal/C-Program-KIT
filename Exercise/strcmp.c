#include<stdio.h>
#include<string.h>

main(){
	char name[100];
	aa:
	printf("enter name : "); scanf("%s",name);
	if(strcmp(name,"m")==0 || strcmp(name,"M")==0){
		printf("Accepted");
	}
	else{
		goto aa;
		getch();
	}
}

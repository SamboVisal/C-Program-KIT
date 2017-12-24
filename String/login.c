#include<stdio.h>
#include<string.h>

main(){
	char user[20],pass[20];
	aaa:
	printf("Input Username : "); gets(user);
	printf("Input Pass : "); gets(pass);
	
	if(strcmp(user,"pisal")==0 && strcmp(pass,"pass")==0){
		printf("success");
	}
	else{
		printf("Try again\n");
		goto aaa;
	}
	
}

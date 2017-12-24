#include<stdio.h>

#include<string.h>
main()
{
	char username[20];
	char password[20];
	
 
	printf("Enter the username: ");
	gets(username);
 
	printf("\nEnter the password: ");
	gets(password);
 
	if(strcmp(username, "pisal") == 0){
		
		if(strcmp(password, "zlatan") == 0){
			
			printf("\nUser successfully logged in...");
		}else{
			
			printf("\nPassword entered is invalid");
		}
	}else{
		
		printf("\nUsername entered is invalid");
	}
 
	
}

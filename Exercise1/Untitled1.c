#include<stdio.h>
#include<string.h>
main(){ char name[20],pass[20];
	
	printf("Input name : "); gets(name);
	printf("Input pass : "); gets(pass);
	if(name=="pisal")
	{
		if(pass=="pisal"){
			printf("Correct");
		}
		else{
			printf("Wrong dude");
		}
	}
	else {
	
	printf("Not correct name");
}
	
	
}

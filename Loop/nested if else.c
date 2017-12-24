#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){
/*	char username[20];
	char password[20];

	printf("Input username : \n"); scanf("%s",&username);	
	printf("Input Password : \n"); scanf("%s",&password);
	if(strcmp(username,"pisal")==0 && strcmp(password,"pass")==0)
	printf("access okay!");
	else("not correct");
	getch(); 
char UserName[] = "iluvcake";
scanf("%s", &UserName);
printf("Please enter your password: \n");
char PassWord[] = "Chocolate";
scanf("%s", &PassWord);
    //if...else statement to test if the input is the correct username. 
    if (UserName == "iluvcake") 
    {
     if (PassWord == "Chocolate"){
     printf("Welcome!\n");
    }
    }else
    {
     printf("The user name or password you entered is invalid.\n");
    }	*/
    
 char pasword[10],usrname[10], ch;
 int i;
 
 
 
 printf("Enter User name: ");
 gets(usrname);
 printf("Enter the password <any 8 characters>: ");
 
 for(i=0;i<8;i++)
 {
  ch = getch();
  pasword[i] = ch;
  ch = '*' ;
  printf("%c",ch);
 }
 
// pasword[i] = '\0';
 
 /*If you want to know what you have entered as password, you can print it*/
 printf("\nYour password is :");
 
 for(i=0;i<8;i++)
 {
  printf("%c",pasword[i]);
 }
}


#include<stdio.h>
#include<conio1.h>
#include<string.h>
main(){
	char ch;
	char admin[100],pass[100];
	do{
	aaa:	
	clrscr();
	gotoxy(40,1);
	printf("*****Welcome To Book Store*****\n");	
	gotoxy(40,4);
	printf("Input Admin Username : "); 
	gotoxy(64,4);
	gets(admin);
	gotoxy(40,6);
	printf("Input Admin Password : "); 
	gotoxy(64,6);
	gets(pass);
	
	}while(strcmp(admin,"admin")==1 && strcmp(pass,"1997")==1);
do{
	clrscr();
	gotoxy(40,1);
	printf("*****Please Choose Any Option*****\n");
	gotoxy(2,3);
	printf("1/Show All Books Information\n");
	gotoxy(2,5);
	printf("2/Sell Book\n");
	gotoxy(2,7);
	printf("3/Add Book\n");
	gotoxy(2,9);
	printf("4/Delete Book\n");
	gotoxy(2,11);
	printf("5/Edit Book Information\n");
	gotoxy(2,13);
	printf("6/Search Book Information\n");
	gotoxy(2,15);
	printf("7/LogOut\n");
	gotoxy(2,17);
	printf("8/Exit Program\n");
	ch=getch();
	switch(ch){
		case '1' : break;
		case '2' : break;
		case '3' : break;
		case '4' : break;
		case '5' : break;
		case '6' : break;
		case '7' : 	goto aaa;
					getch();	
					break;
		case '8' : break;
		default : printf("wrong input\n");
					getch();			
			
	}
}while(ch!='8');		
}

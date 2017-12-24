#include<stdio.h>
#include<string.h>
#include<conio1.h>


main(){
		char name[100][25],last[100][25],ch; int i,n,j;
	do{
	clrscr();
	printf("enter first name : \n");   scanf("%s",name[i]);
	printf("enter last name :  \n");   	scanf("%s",last[i]);

	i++;
	ch=getch();
    }while(ch==13);
    /*
    while(n>0){
    	for(n=0;n<i;n++){
    	for(j=0;j<i;j++){
    		strcat(name[n],last[j]);
    		
		}
	}
	};
    */
    printf("%20s%20s\n","First Name","Last Name");
    for(n=0;n<i;n++){
    	printf("%20s%20s\n",name[n],last[n]);
	}
	getch();
}

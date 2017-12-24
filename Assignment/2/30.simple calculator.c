#include<stdio.h>

main(){
	int f,se,result=0; char c,o[10];
	printf("Make a simple calculator\n");
	printf("enter first : "); scanf("%d",&f);
	printf("enter operators : \n"); 
	printf("1/+ operator\n");
	printf("2/- operator\n");
	printf("3/* operator\n");
	printf("4// operator\n");	
	c=getch();
	switch(c){
		case '1' :  printf("you have entered + operator\n");
					printf("enter second : "); scanf("%d",&se);
					result = f + se;
					printf("The %d + %d = %d",f,se,result);	
					break;
		case '2' :  printf("you have entered - operator\n");
					printf("enter second : "); scanf("%d",&se);
					result = f - se;
					printf("The %d - %d = %d",f,se,result);	
					break;
		case '3' : 
	                printf("you have entered * operator\n");
					printf("enter second : "); scanf("%d",&se);
					result = f * se;
					printf("The %d * %d = %d",f,se,result);		
					break;
		case '4' :  printf("you have entered / operator\n");
					printf("enter second : "); scanf("%d",&se);
					result = f / se;
					printf("The %d / %d = %d",f,se,result);		
					break;
	}
}

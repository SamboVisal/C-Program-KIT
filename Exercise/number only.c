#include<stdio.h>

main(){
	char s[20][10];  int i,count;
	printf("Input number only : "); 
	
	for(i=0; s[i]!='\0'; i++ ){
			if(scanf("%[0-9]",&s[i])==1){
			break;
			count++;	
			}
		}
	for(i=0; i<count; i++)
	printf("%s",s[i]);
    getch();		
	}	
		
				
	
	
		
	


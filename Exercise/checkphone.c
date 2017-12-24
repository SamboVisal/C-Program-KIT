#include<stdio.h>
#include<conio1.h>
#include<stdlib.h>
main(){
	int k,i;  char num[100];
		a:
	printf("enter number : "); scanf("%s",&num);
	
	for(i=0;num[i]!='\0';i++);
	k=i;
	if(k>10){
		
		printf("Invalid Phone Number\n");
		goto a;
		getch();
	}
	printf("%d",k);
}

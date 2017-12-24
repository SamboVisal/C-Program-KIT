#include<stdio.h>

main(){
	int y;
	printf("program to check leap year\n");
	printf("enter year"); scanf("%d",&y);
	if(y%4==0){
		
		if(y%100==0){
			
			if(y%400==0){
				printf("this is leap year %d",y);
			}
			else
			printf("this is not %d",y);
		}
		else
			printf("this is leap year %d",y);
		
	}
	else
	printf("this is not leap year %d",y);
}

#include<stdio.h>

main(){
	int day;
	char February;
	printf("If this year is leap, Enter 1 if not enter any interger : "); scanf("%c",&February);
	
	day= (February =='1') ? 29 : 28 ;
	
	printf("Number of day in February is %d",day);
	
	
	return 0;
	
}

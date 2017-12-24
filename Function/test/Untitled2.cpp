#include<stdio.h>

main(){
	
	printf("Please Enter The Number : "); 
	a:
	scanf("%d",&num);
	if(num>10){
		goto a;
	}
	else{
		printf("Confirm");
	}
}

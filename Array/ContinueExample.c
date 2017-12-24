#include<stdio.h>

main(){
	
	int i,number,sum=0,q;
	
	for(i=0; i<5; i++){
		
		printf("Enter the number : ");
		scanf("%d",&number);
		// if the user input negative number this program will terminated
		if(number <0 ){
			
			break;
			
		}
		sum+=number;
		
		
	}
	printf("The sum is %d",sum);
	
}

/*this program will find the factorial*/
#include<stdio.h>
main(){
	long n; int i=1; long facto;
	printf("input the number to factorail : "); scanf("%ld",&n);
/*	for(i=1;i<=n;i++){
		
		facto=facto*i;
	}*/
	if(n<0)
	printf("Error!");
	else
	do{
		
		facto=facto*i;
		i++;
		
	}while(i<=n);
	printf("the value of factorial %ld = %ld",n,facto);
	
	
}

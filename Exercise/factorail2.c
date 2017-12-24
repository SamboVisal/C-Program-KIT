#include<stdio.h>

main(){ long n,facto=1; int i=1;
    printf("input the number to factorail : "); scanf("%ld",&n);
/*	for(i=1;i<=n;i++){
		
		facto=facto*i;
	}*/
	do{
		
		facto=facto*i;
		i++;
		
	}while(i<=n);
	printf("the value of factorial %ld = %ld",n,facto);
	
}

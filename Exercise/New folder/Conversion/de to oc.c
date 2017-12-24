#include<stdio.h>

main(){
	long de,quotient; int i,j,octal[100],r;
	printf("Input Decimal Number : "); scanf("%ld",&de);
	i=0;
	while(de!=0){
		r=de%8;
		octal[i]=r;
		de /= 8;
		i++;
	}
	for(j=i-1; j>=0; j--){
		printf("%d",octal[j]);
	}
}

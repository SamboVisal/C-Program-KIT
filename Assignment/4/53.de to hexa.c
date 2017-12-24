#include<stdio.h>
#include<math.h>
long hexa(long de);
void main(){
	long de;
	printf("Enter Decimal Number : "); scanf("%ld",&de);
	hexa(de);
}
long hexa(long de){
	int n=0,k=0; long di[100];
	while(de>0){
		
		di[n] = de%16;
		de=de/16;
		n++;
		k++;
	}
	for(n=k-1;n>=0;n--){
		switch(di[n]){
			
			case 10: printf("A"); break;
			case 11: printf("B"); break;
			case 12: printf("C"); break;
			case 13: printf("D"); break;
			case 14: printf("E"); break;
			case 15: printf("F"); break;
			default : printf("%ld",di[n]);
		}
		
	}
}

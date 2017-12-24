#include<stdio.h>

main(){
	int i,Class[6],sum=0; 
	printf("Enter 6 Numbers : "); 
	for(i=0;i<6;i++){
		scanf("%d",(Class+i));
		sum += *(Class+i);
	}
	printf("%d",sum);
}

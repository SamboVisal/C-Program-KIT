#include<stdio.h>

main(){
	int n,i,k,result=0;
	printf("Multiplication Table From 1 To 10\n");
	printf("number : "); scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(k=1;k<=10;k++){
			result = i * k ;
			printf("%d * %d = %d\n",i,k,result);
		}
		printf("\n");
	}
	//printf("\t");
}

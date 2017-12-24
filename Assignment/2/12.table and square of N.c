#include<stdio.h>

main(){
	int i,n,k,j;
	printf("this program is table is N and square of N\n");
	printf("enter number : "); scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=n;j>0;j--){
			printf("%d\t",n);
		}
		printf("\n");
	}
	
}

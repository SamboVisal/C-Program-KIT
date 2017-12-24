#include<stdio.h>

main(){
	int n,i,j,z=1;
	printf("This program is about Floyd Traingle\n");
	printf("enter number : "); scanf("%d",&n);
	for(i=1; i<=n; i++){
		
		for(j=1;j<=i;j++){
			printf("%d \t",z);
			z++;
		}
		printf("\n");
		
	}
	
}

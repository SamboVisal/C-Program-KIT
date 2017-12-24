#include<stdio.h>

main(){
	int a[20][20],i,j,t[20][20];
	printf("Tranpose of matrix\n");
	printf("enter the matrix : \n");
	for(i=0;i<2;i++){
		
		for(j=0;j<2;j++){
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("the matrix is : \n");
	for(i=0;i<2;i++){
		
		for(j=0;j<2;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("the tranpose of matrix is \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			t[j][i]=a[i][j];
		}
	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",t[i][j]);
		}
		printf("\n");
	}
	
}

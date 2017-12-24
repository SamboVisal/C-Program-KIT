#include<stdio.h>


main(){
	int row1,row2,col1,col2,i,j,m1[100][100],m2[100][100],result[100][100],a;
	
	printf("Input the first matrix\n");
	printf("input amount of row : ");  scanf("%d",&row1);
	printf("input amount of coloum : ");  scanf("%d",&col1);
	
	printf("Input the second matrix\n");
	printf("input amount of row : "); scanf("%d",&row2);
	printf("input amount of coloum : "); scanf("%d",&col2);
	printf("Input number for first matrix : \n");
	for(i=0;i<row1;i++){
		for(j=0;j<col2;j++){
			scanf("%d",&m1[i][j]);
		}
		printf("\n");
	}
	printf("input number for second matrix\n");
	for(i=0;i<row2;i++){
		for(j=0;j<col2;j++){
			
			scanf("%d",&m2[i][j]);
		}
		printf("\n");
	}
	printf("this is the both matrix\n");
	printf("the first\n");
	for(i=0;i<row1;i++){
		for(j=0;j<col1;j++){
			printf("%d\t",m1[i][j]);
		}
		printf("\n");
	}
	printf("the second\n");
	for(i=0;i<row2;i++){
		for(j=0;j<col2;j++){
			printf("%d\t",m2[i][j]);
		}	
		printf("\n");
	}
	if(col1==row2){
		for(i=0;i<row1;i++){
			for(j=0;j<col1;j++){
				result[i][j]=0;
				for(a=0;a<col1;a++){
					result[i][j]+=m1[i][a]*m2[a][j];
				}
			}
		}
		printf("the result is \n");
		
		for(i=0;i<row1;i++){
			for(j=0;j<col1;j++){
				printf("%d\t",result[i][j]);
			}
			printf("\n");
		}
	}
	else{
		printf("this matrix cant be multiplied\n");
	}
}

#include<stdio.h>
#include<conio1.h>
main(){
	int a[3][3], b[3][3], c[3][3],i,j;
	
	
	printf("a : ");
	
	for(i=0;i<3;i++){
		
		for(j=0;j<3;j++){
			
			scanf("%d",&a[i][j]);
		}		
	}
	printf("b : ");
	
	for(i=0;i<3;i++){
		
		for(j=0;j<3;j++){
			
			scanf("%d",&b[i][j]);
		}		
	}

		
	
	for(i=0;i<3;i++){
		
		for(j=0;j<3;j++){
			
		c[i][j]=a[i][j]-b[i][j];	
		}		
	}	
	printf("the substract is \n");
	
	for(i=0;i<3;i++){
		
		for(j=0;j<3;j++)
		{
			
			printf("\t%d",c[i][j]);
			
		}		
			printf("\n");
	
                    }
}

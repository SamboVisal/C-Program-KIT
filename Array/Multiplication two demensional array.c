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
			
		c[i][j]=a[i][j]*b[i][j];	
		}		
	}	
	printf("the multiplication is \n");
	
	for(i=0;i<3;i++){
		
		for(j=0;j<3;j++)
		{
			
			printf("\t%d",c[i][j]);
			
		}		
			printf("\n");
	
                    }
}
/*  			    
			if(col1==row2)
	           {
		
			for(i=0;i<row1;i++){
				 for(j=0;j<col2;j++){
				 		result[i][j]=0;
				 		for(a=0;a<col1;a++)
				 		result[i][j]=result[i][j]+ma1[i][a]*ma2[a][j];
				 	
				     }
				
			    }
	        

			    
				printf("the result is\n");	
				  for(i=0;i<row1;i++){
				for(j=0;j<col2;j++){
					
					printf("\t%d",result[i][j]);
				          }
				printf("\n");
				
			             }

		           }
		         		else{
			printf("I can not multiply dude!");
		}			    
		
		}			 */

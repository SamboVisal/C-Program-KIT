#include<stdio.h>
#include<conio1.h>
main(){ char ch;
aaa:    clrscr();
	 int row1,col1,col2,row2,ma1[100][100],ma2[100][100],result[100][100],i,j,a;
	puts("Input 2 martrices to multiply\n\n");
	puts("Input the first martrix\n"); 
	printf("Enter first row : "); scanf("%d",&row1);
	printf("Enter first col   : "); scanf("%d",&col1);
	printf("\n");
	puts("Input the second martrix\n");
	printf("Enter second row : "); scanf("%d",&row2);
	printf("Enter second col   : "); scanf("%d",&col2);	
	printf("\n");  
	  printf("Enter Number for the first martrix : \n");
	  for(i=0;i<row1;i++)
	  			 {
	  	for(j=0;j<col1;j++){
	  		
	  		scanf("%d",&ma1[i][j]);
		                   }	
		          printf("\n");         
	             }
	  printf("Enter Number for the second martrix : \n");
	  for(i=0;i<row2;i++)
	  			 {
	  	for(j=0;j<col2;j++){
	  		
	  		scanf("%d",&ma2[i][j]);
		                   }
					printf("\n");	   	
	             }
			printf("The first martrix is\n");
			for(i=0;i<row1;i++)
	  			 {
	  	for(j=0;j<col1;j++){
	  		
	  		printf("\t%d",ma1[i][j]);
		                   }
					printf("\n");	   	
	             }
	    printf("The second martrix is\n");
			for(i=0;i<row2;i++)
	  			 {
	  	for(j=0;j<col2;j++){
	  		
	  		printf("\t%d",ma2[i][j]);
		                   }
					printf("\n");	   	
	             } 	
		if(col1==row2)
	           {
		
			for(i=0;i<row1;i++){
				 for(j=0;j<col2;j++){
				 	result[i][j]=0;
				 	for(a=0;a<col1;a++)
					result[i][j]+=ma1[i][a]*ma2[a][j];
				 	
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
	
			printf("I can not multiply dude!\n");
			printf("Press Enter to re-input other for exit");		  		 	             
	        ch=getch();
	    	if(ch==13) goto aaa;    
		    }		
		

}

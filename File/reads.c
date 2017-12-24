#include<stdio.h>

main(){
	
	char name[40]; int i,mark,num;
	
	FILE *fp;
	fp = fopen("D:\\FILE\\student.text","r");
		if((fp = fopen("D:\\FILE\\student.txt","r"))==NULL){
		printf("can not open\n");
		exit(1);
	}
	while(fscanf(fp,"%s %d",name,&mark)!=EOF ){
			printf("%s %d",name,mark);
	}
		
			
			
			fclose(fp);
	
	
}

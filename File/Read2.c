#include<stdio.h>
#include<stdlib.h>
main(){
	
	char name[20]; int i,mark,num;
	
	
	FILE *fp;
	fp = fopen("D:\\FILE\\student.txt","r");
	if((fp = fopen("D:\\FILE\\student.txt","r"))==NULL){
		printf("can not open\n");
		exit(1);
	}
	while(fscanf(fp,"%s %d",name,&mark)!=EOF){
		printf("%s %d\n",name,mark);
	}
	fclose(fp);
}

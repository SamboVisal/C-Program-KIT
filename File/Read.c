#include<stdio.h>
#include<stdlib.h>
main(){
	
	char name[20]; int mark,i,num;
	
	printf("Input Amount of student : ");  scanf("%d",&num);
	
	FILE *fp;
	fp = fopen("D:\\FILE\\student.txt","a");
	if(fp==NULL){
		printf("Can not open\n");
		exit(1);
	}
	for(i=0;i<num;i++){
		printf("Input Name and Mark : "); scanf("%s %d",name,&mark);
		fprintf(fp,"%s %d",name,mark);
	}
	fclose(fp);
}

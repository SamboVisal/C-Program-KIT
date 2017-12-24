#include<stdio.h>

main(){
	char name[40];
	int mark,i,num;	
	printf("Input Number Of Student : "); scanf("%d",&num);
	FILE *fp;
	
	fp = fopen("D:\\FILE\\student.txt","w");
	for(i=0;i<num;i++){
		printf("Input Name And Mark : "); scanf("%s %d",name,&mark);
		fprintf(fp,"%s %d\n",name,mark);
	}
	fclose(fp);
	
}

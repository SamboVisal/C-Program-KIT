/*
write record to a file using structure
fprintf
*/
#include<stdio.h>
#include<stdlib.h>

main(){
	
	FILE *fp; char another = 'y';
	struct emp{
		
		char name[40];
		int age;
		float bs;
	};
	struct emp e;
	
	fp= fopen("D:\\FILE\\pisal.txt","r");
	if(fp==NULL){
		puts("Cannot open file\n");
		exit(1);
	}
	while (fscanf(fp,"%s %d %f",e.name,&e.age,&e.bs)!=EOF)
		
		//printf("Enet name,age and basic salary\n");
		printf("%s %d %.2f\n",e.name,e.age,e.bs);
	
	fclose(fp);
}

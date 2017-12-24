#include<stdio.h>
#include<stdlib.h>

main(){
	struct person{
	char name[100]; 
	int age;	
	};
	struct person p;
	FILE *fp;
	char ch;
	fp = fopen("D:\\FILE\\person.bin","ab");
		
		printf("input name : "); scanf("%s",p.name);
		printf("input age : "); scanf("%d",&p.age);
	//	fwrite(&p,sizeof(struct person),1,fp);
		fprintf(fp,"%s %d",p.name,p.age);	
	fclose(fp);
}

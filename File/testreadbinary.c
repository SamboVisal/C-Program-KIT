#include<stdio.h>
#include<stdlib.h>

main(){
	struct person{
	char name[100]; 
	int age;	
	};
	int i;
	struct person p;
	FILE *fp;
	fp = fopen("D:\\FILE\\person.bin","rb");
	for(i=0;i<4;i++){
	fread(&p,sizeof(struct person),1,fp);
	printf("%s %d\n",p.name,p.age);		
	}	
	
	fclose(fp);
}

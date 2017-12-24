#include<stdio.h>
#include<stdlib.h>
main(){
	
	struct person{
		
		char name[100];
		int age;
	};
	struct person p; FILE *f;
	int i;
	f=fopen("D:\\file\\object.bin","rb");
	if(f==NULL){
		printf("can not open\n");
		exit(1);
	}
	for(i=0;i<=2;i++){
		fread(&p,sizeof(struct person),1,f);
		printf("%s %d\n",p.name,p.age);
		
	}
	fclose(f);
}

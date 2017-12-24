#include<stdio.h>


main(){
	int i;
	struct person{
		
		char name[100];
		int  age;
	};
	
	struct person p; FILE *f;
	 
	 f=fopen("D:\\file\\object.bin","wb");
	 
	 for(i=0;i<=2;i++){
	 	
	 	printf("enter name : "); scanf("%s",&p.name);
	 	printf("enter age : "); scanf("%d",&p.age);
	 	fwrite(&p,sizeof(struct person),1,f);
	 }
	 
}

#include<stdio.h>
#include<stdlib.h>

main(){
	
	struct number{
		int n1,n2,n3;
		
	};
	int i;
	struct number num;
	FILE *fp; 
	if((fp=fopen("D:\\FILE\\binary.txt","wb"))==NULL){
		
		printf("Can not open\n");
		exit(1);
	}
	for(i=1;i<5;i++){
		
		num.n1 = i;
		num.n2 = 5;
		num.n3 = 5 + 1;
		fwrite(&num,sizeof(struct number),1,fp); 
	}
	
	fclose(fp);
}

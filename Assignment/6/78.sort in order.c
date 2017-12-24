#include<stdio.h>
#include<string.h>

main(){
	int i,j; char name[20][100],t[100];
	printf("enter string : \n");
	for(i=0;i<5;i++){
		scanf("%s",name[i]);
	}
	for(i=0;i<5;i++){
		for(j=i+1;j<=5;j++){
			if(strcmp(name[i],name[j])>0){
				strcpy(t,name[i]);
				strcpy(name[i],name[j]);
				strcpy(name[j],t);
			}
		}
	}
	printf("after sorting\n");
	for(i=0;i<=5;i++){
		printf("%s\n",name[i]);
	}
}

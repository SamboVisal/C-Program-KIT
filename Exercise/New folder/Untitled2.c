#include<stdio.h>
#include<string.h>
main(){
	char name[10][15],a[10]; int n,i,k;
	printf("Input amount of name : "); scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",&name[i]);
	}
	for(i=0; i<n; i++){
		for(k=i+1; k<n; k++){
			if(strcmp(name[i],name[k])>0){
				strcpy(a,name[i]);
				strcpy(name[i],name[k]);
				strcpy(name[k],a);
			}
		}
	}
	printf("After sorting\n");
	for(i=0; i<n; i++){
		printf("%s\n",name[i]);
	}
}

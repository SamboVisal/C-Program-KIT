#include<stdio.h>

main(){
	int a,b[20],i,j,k;
	scanf("%d",&a);
	for(i=0;i<a;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<a;i++){
		for(j=i+1;j<a;j++){
			if(b[i]==b[j]){
				for(k=j;k<a;k++){
					b[k]=b[k+1];
				}
				a--;	
			}
		}
		
	}
	printf("New array\n");
	for(i=0;i<a;i++){
		printf("%d\n",b[i]);
	}
}

#include<stdio.h>

main(){
	int i,s[20];
	for(i=0; i<6; i++){
		scanf("%d",(s+i));
	}
	for(i=0;i<6;i++){
		printf("%d\n",*(s+i)); // point to value of address
		//printf("%d",&s[i]); point to address of element (s+i)
	}
	
}

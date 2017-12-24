#include<stdio.h>
#include<stdlib.h>
main(){
	int a,i;
	int *p;
	scanf("%d",&a);
	p = (int*) malloc(a *sizeof(int));
	for(i=0;i<a;i++){
		
		scanf("%d\n",p+i);
	}
	
	for(i=0;i<a;i++){
		
		printf("%d\n",*(p+i));
		
	}
}

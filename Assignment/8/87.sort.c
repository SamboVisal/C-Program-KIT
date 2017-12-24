#include<stdio.h>

main(){
	int n,i,p[100],c,j;
	int *t;
	printf("enter element : "); scanf("%d",&n);
	printf("enter %d number : \n",n);
	for(i=0;i<n;i++){
		scanf("%d",(p+i));
	}
	t=p;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(*t+i>*t+j){
				c = *(t+i);
				*(t+i) = *(t+j);
				*(t+j) = c;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d\n",*(t+i));
	}
}

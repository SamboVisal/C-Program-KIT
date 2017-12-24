#include<stdio.h>
#include<stdlib.h>
main(){
	int *p,n,i,sum=0;
	printf("Enter Element : "); scanf("%d",&n);
	p = (int*) malloc(n *sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",(p+i));
		sum+= *(p+i);
	}
	printf("%d",sum);
	
}

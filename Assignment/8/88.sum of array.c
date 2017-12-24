#include<stdio.h>


main(){
	int n,i,p[100],sum=0;
	int *t;
	printf("enter element : "); scanf("%d",&n);
	printf("enter %d number : ",n);
	for(i=0;i<n;i++){
		scanf("%d",(p+i));
	}
	t = p;
	for(i=0;i<n;i++){
		sum+= *(t+i);
	}
	printf("%d",sum);
	
}

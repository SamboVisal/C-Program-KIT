#include<stdio.h>

main(){
	int *pt;
	int n,i,p[100];
	pt=&p[0];
	printf("enter element : "); scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",p+i);
	}
	pt=&p[n-1];
	printf("before reverse : \n");
	for(i=0;i<n;i++){
		printf("%d\t",*p+i);
	}
	printf("after reverse \n");
	for(i=0;i<n;i++){
		printf("%d\t",*pt-i);
	}
	
}

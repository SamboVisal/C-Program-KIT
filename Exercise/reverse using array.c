#include<stdio.h>

main(){
	int a[20],i,n,sum=0;
	printf("Input amount of arry : ");
	scanf("%d",&n);
	for(i=0; i<n; i++)
	scanf("%d",&a[i]);
	for(i=0; i<n; i++){
		sum= sum+a[i];
	}

	printf("Sum value is %d",sum);
}

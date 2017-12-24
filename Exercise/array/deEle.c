#include<stdio.h>


main(){
	int n,i,a[20],e;
	printf("input element : "); scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	printf("Input element to delete : "); scanf("%d",&e);
	for(i=e-1; i<n; i++){
		a[i]=a[i+1];
	}
	n--;
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
}

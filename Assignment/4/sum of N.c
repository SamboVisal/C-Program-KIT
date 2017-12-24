#include<stdio.h>


main(){
	int n,i,sum=0,a[100];
	printf("enter element : "); scanf("%d",&n);
	printf("enter %d number: ",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		
		sum = sum +a[i];
	}
	printf("%d",sum);
	
	
}

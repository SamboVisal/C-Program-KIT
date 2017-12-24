#include<stdio.h>

main(){
	
	int a[99],n,i,New,s,loc;
	printf("Input Element : "); scanf("%d",&n);
	printf("Input the number of array : ");
	
	for(i=0;i<n;i++){
		
		scanf("%d",&a[i]);
	}
	
	printf("Input element array to delete : "); scanf("%d",&s);
	for(i=s-1; i<n; i++){
		
		a[i]=a[i+1];
		
	}
		n--;
	
	for(i=0; i<n; i++){
		printf("\n%d",a[i]);
	}
	
}

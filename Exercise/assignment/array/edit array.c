#include<stdio.h>

main(){
	int a[99],n,i,New,loc;
	printf("Input Element : "); scanf("%d",&n);
	printf("Input the number of array : ");
	
	for(i=0;i<n;i++){
		
		scanf("%d",&a[i]);
	}
	printf("Input location to edit : "); scanf("%d",&loc);
	printf("Input New value : "); scanf("%d",&New);
	
	a[loc-1]= New;
	
	for(i=0; i<n; i++){
		
		printf("%d",a[i]);
	}
}

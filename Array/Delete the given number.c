#include<stdio.h>

main(){
	
	int a[99],n,i,New,s,loc,j;
	printf("Input Element : "); scanf("%d",&n);
	printf("Input the number of array : ");
	
	for(i=0;i<n;i++){
		
		scanf("%d",&a[i]);
	}
	
	printf("Input number array to delete : "); scanf("%d",&s);
	 for(i=0; i<n; i++){
	 	
	 	if(s==a[i]){
	 		for(j=i; j<n; j++)
	 		a[j]=a[j+1];
		 }
	 	
	 }
		n--;
	
	for(i=0; i<n; i++){
		printf("\n%d",a[i]);
	}
	
}

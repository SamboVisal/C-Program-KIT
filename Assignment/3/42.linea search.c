#include<stdio.h>

main(){
	int n,i,j,e,a[100];
	printf("Linea Search \n");
	printf("enter element : "); scanf("%d",&n);
	printf("enter number : \n");
	for(i=1;i<=n;i++){
		printf("input number %d : ",i);
		scanf("%d",&a[i]);
	}
	printf("input number to search : "); scanf("%d",&e);
	if(e>n)
	printf("element is not equal");
	else
	for(i=0;i<n;i++){
		if(a[i]==e){
	     printf("the number %d is in element %d",e,i);
		 break;		
		}
	}
	
}

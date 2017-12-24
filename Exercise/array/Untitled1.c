#include<stdio.h>


main(){
	int n,a[1001],i,ne,b[100];
	printf("enter element : "); scanf("%d",&n);
	printf("enter numner : ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter new element : ");
	scanf("%d",&ne);
	printf("enter the number : ");
	for(i=0;i<ne;i++){
		scanf("%d",&b[i]);
	}	
	for(i=n;i>=0;i--){
		a[i+ne]=a[i];
	}
	for(i=0;i<ne;i++){
		a[i]=b[i];
	}
	printf("the new number is ");
	for(i=0;i<n+ne;i++){
		printf("%d\t",a[i]);
	}
}

#include<stdio.h>

main(){
	int i,a[100],b[100],n,ne;
	printf("enter amount of array : ");  scanf("%d",&n);
	printf("enter element : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter new element : "); scanf("%d",&ne);
	for(i=n;i>=0;i--){
		a[i+ne]=a[i];
	}
	printf("enter new number : ");
	for(i=0;i<ne;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<ne;i++){
		a[i]=b[i];
	}
	printf("new array is \n");
	for(i=0;i<n+ne;i++){
		printf("%d\t",a[i]);
	}
}

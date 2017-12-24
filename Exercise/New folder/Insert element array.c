#include<stdio.h>

main(){
	int a[20],n,position,value,i;
	printf("Input amount : "); scanf("%d",&n);
	for(i=0; i<n; i++){
		scanf("%d",&a[i]);
	}
	printf("Input position you want to add : "); scanf("%d",&position);
	printf("Input new number : "); scanf("%d",&value);
	for(i=n-1; i>=position-1; i--){
		a[i+1]=a[i];
	}
	a[position-1]=value;
	n++;
	for(i=0; i<n; i++){
		printf("%d\n",a[i]);
	}
}

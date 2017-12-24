#include<stdio.h>

main(){
	int n,i,j,k,a[100];
	printf("Delete duplicate array\n");
	printf("enter element : \n"); scanf("%d",&n);
	printf("enter number : \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]==a[j]){
				for(k=i;k<n;k++){
					a[k]=a[k+1];
				}
				n--;
			}
		}
	}
	printf("the new array is \n");
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

#include<stdio.h>

main(){
	int a[100],n,i,j,t;
	printf("reverse number using array\n");
	printf("enter element : ");  scanf("%d",&n);
	printf("enter number : \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	 j = n-1; 
	 i=0;
	while(i<j){
		 t = a[i]; a[i]=a[j]; a[j]=t;
		 j--;
		 i++;
	}
	for(i=0;i<n;i++){
		printf("%d \n",a[i]);
	}
}

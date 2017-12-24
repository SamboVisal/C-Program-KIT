#include<stdio.h>

main(){
	int a[100],n,i,j,t;
	printf("enter element : "); scanf("%d",&n);
	printf("enter number: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
}

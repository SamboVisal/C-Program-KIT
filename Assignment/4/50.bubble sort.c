#include<stdio.h>

main(){
	int n;
	printf("enter element : "); scanf("%d",&n);
	b(n);
}
int b(int n){
	int i,j,k,a[100];
	printf("enter number \n"); 
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]>a[j]){
				k = a[i];
				a[i] = a[j];
				a[j] = k;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}

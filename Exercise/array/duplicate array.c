#include<stdio.h>

main(){
	int n,a[100],i,k,j;
	printf("enter element : "); scanf("%d",&n);
	printf("enter number : ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;){
			if(a[j]==a[i]){
				for(k=j;k<n;k++){
					a[k]=a[k+1];
				}
				n--;
			}else j++;
		}
		
	}
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
	
}

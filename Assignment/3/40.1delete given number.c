#include<stdio.h>

main(){
	int n,a[100],i,ne,j;
	printf("delete the given number\n");
	printf("enter number : "); scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter number to delete : "); scanf("%d",&ne);
	for(i=0;i<n;i++){
		if(ne==a[i]){
			for(j=i;j<n;j++)
			a[j]=a[j+1];
		}
	}
	n--;
	for(i=0;i<n;i++)
	printf("%d\n",a[i]);
}

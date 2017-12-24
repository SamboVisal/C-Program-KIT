#include<stdio.h>

main(){
	int a[100],i,n,ne,j;
	printf("delete array element\n");
	printf("enter element : \n");  scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter element to delete : ");  scanf("%d",&ne);
	for(i=0;i<n;i++){
		if(a[i]==ne)
		a[i]=a[i+1];
	}
	n--;
	for(i=0;i<n;i++){
		printf("%d",a[i]);
	}
}

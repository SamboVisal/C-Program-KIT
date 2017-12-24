#include<stdio.h>


main(){
	int *p,n,ar[100],i;
	p=&ar[0];
	printf("enter element : "); scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",(p+i));
	}
	p = &ar[n];
	printf("the reverse array is \n");
	for(i=1;i<=n;i++){
		
		printf("%d ",*(p-i));
	}
	
}

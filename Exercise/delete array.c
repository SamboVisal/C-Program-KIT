#include<stdio.h>

main(){
	int a,n[20],d,i;
	printf("Input no of element : "); scanf("%d",&a);
	printf("Input the number of array : ");
	for(i=0; i<a; i++){
		
		scanf("%d",&n[i]);
	}
	printf("Input the location to delete : ");
	scanf("%d",&d);
	for(d=0; d<a; d++){
		
		n[d-1]=n[d];
			
	}
	a--;
	printf("The remaining : \n");
	for(i=0;i<a;i++){
		printf("%d\n",n[i]);
	}
}

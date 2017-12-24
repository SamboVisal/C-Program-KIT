#include<stdio.h>

main(){
	int n;
	printf("enter element : ");  scanf("%d",&n);
	m(n);
	
}
int m(int n){
	int max,min,a[100],i;	
	printf("enter number : ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++){
		if(max<a[i])
		max = a[i];
		if(min>a[i])
		min = a[i];
	}
	printf("the maximum number is %d \n",max);
	printf("the minimun number is %d ",min);
}

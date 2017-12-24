#include<stdio.h>

main(){
	
	int a[30],i,j,n,temp;
	printf("Input amount of numbers : ");
	scanf("%d",&n);
	for(i=0; i<n; i++)
		scanf("%d",&a[i]);
	
	j=i-1;
	i=0;
	while(i<j){
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		i++;
		j--;
	}
	for(i=0; i<n; i++){
	printf("\n %d",a[i]);
	}
	
	return 0;
}

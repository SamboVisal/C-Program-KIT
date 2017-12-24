#include<stdio.h>

main(){
	int num[20],i,n,a,k,max=0;
	printf("Input number : "); scanf("%d",&n); 
	for(i=0; i<n; i++){
		
		scanf("%d",&num[i]);
	}
	
	for(i=0; i<n; i++){
		for(k=i+1; k<n; k++){
			if(num[i]<num[k]){
			a=num[i]; num[i]=num[k]; num[k]=a;	
			}
			// 7 3 4 6 1
			// 7 4 3 6 1
		}
	}
	for(i=0; i<n; i++){
		printf("%d ",num[i]);
	}
	for(i=0; i<n; i++){
		if(max<num[i])
		max=num[i];
	}
	printf("%d",max);
}

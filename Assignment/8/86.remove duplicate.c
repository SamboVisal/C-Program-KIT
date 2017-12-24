#include<stdio.h>


main(){
	int n,a[100],i,j,k;
	int *t;
	printf("enter amount : "); scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",a+i);
	}
	t=a;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;){
			if(*(t+i) == *(t+j)){
			for(k=j;k<n;k++){
				*(t+k) = *(t+k+1);	
			}n--;
			
			}else j++;
			
	    }
		
	}
	for(i=0;i<n;i++){
		printf("%d\t",*(a+i));
	}
}

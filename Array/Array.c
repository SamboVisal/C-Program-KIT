#include<stdio.h>

main(){

  int a[10],i,s,sum=0,average=0;

	printf("Input amount of subject : "); scanf("%d",&s);
	
	for(i=0;i<s;i++){
		
		printf("Input point : "); scanf("%d",&a[i]);
		sum=sum+a[i];
		
	}
	average=sum/s;
	printf("the average is %d",average);
}

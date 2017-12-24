#include<stdio.h>

main(){
	int small,a,c[20],i;
	printf("Input amount of number : ");
	scanf("%d",&a);
	
	for(i=0; i<a; i++){
		
		scanf("%d",&c[i]);
	}
	small=c[0];
	for(i=1; i<a; i++){
		if(c[i]<small)
		small=c[i];
		
	}
	printf("the smallest number is %d",small);
	
}

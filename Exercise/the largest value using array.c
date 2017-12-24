/* This program to find the largest number of array size 5*/
#include<stdio.h>

main(){  int z[20],a,b,larg,small;
		
	printf("Input amount of number to compare : ");
	scanf("%d",&a);
	for(b=0;b<a;b++){
		
		scanf("%d",&z[b]);
		}
	 larg=z[0];
	 small=z[0];
	for(b=1; b<a; b++){
		if(z[b]>larg)
		larg=z[b];
		if(z[b]<small)
		small=z[b];
	}
	printf("The largest number is %d\n",larg);
	printf("The smallest number is %d\n",small);
	return 0;
}

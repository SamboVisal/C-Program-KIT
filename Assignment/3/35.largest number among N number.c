#include<stdio.h>

main(){
	int a[100],j,n,i,c;
	printf("Largest among N number in array\n");
	printf("enter element : \n"); scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	c = a[0];
	//l = a[0];
	for(i=1;i<n;i++){
		if(c<a[i])
		c = a[i];
	}
	printf("the largest number is %d\n",c);
//	printf("the smallest number is %d\n",l);
}

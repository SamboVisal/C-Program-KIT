#include<stdio.h>
#define max 30
main(){
	int i,j,size,arr[max],*ptr;
	ptr=&arr[0];
	printf("Input array size : "); scanf("%d",&size);
	printf("Input %d intergers into array : ",size);
	for(i=0;i<size;i++){
		scanf("%d",(ptr+i));
		// or scanf("%d",ptr); ptr++;
	}
	ptr = &arr[size-1];
	printf("element in array and reverse order are : \n");
	j=size;
	for(i=0;i<size;i++){
		
		printf("element %d is %d\n",j,*(ptr-i));
		j--;
	}
}

#include<stdio.h>
#include<stdlib.h>

main(){
	int n1,n2, *ptr,i;
	printf("Enter size array : ");
	scanf("%d",&n1);
	ptr = (int*) malloc(n1*sizeof(int));
	printf("Address of previously allocated : ");
	for(i=0; i<n1; i++){
		printf("%d\n",ptr+i);
	}
	
	printf("Enter new element size of array : ");
	scanf("%d", &n2);
	ptr = realloc(ptr,n2);
	for(i=0;i<n2;i++){
		printf("%d\n",ptr+i);
	}
}

#include<stdio.h>
#include<stdlib.h>

main(){
	//ptr = (cast-type*)calloc(n, element-size);
	int num,i,*ptr,sum=0;
	printf("Enter element : ");
	scanf("%d",&num);
	//// Allocates the memory for 'num' elements.
	ptr = (int*) calloc(num,sizeof(int));
//same as malloc but this will initilaze from zero, it will allocate memory in continue memory... 
//this will remove old value and allocate new value all are zero....	
	if(ptr == NULL){
		printf("Erro! memory not allocated");
		exit(0);
	}
	printf("Enter number : ");
	for(i=0;i<num;i++){
		scanf("%d",ptr+i);
		sum+=*(ptr+i);
	}
	printf("Sum = %d",sum);
	free(ptr);
}

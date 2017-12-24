#include<stdio.h>
#include<stdlib.h>

main(){
	int num,i,*data;
	printf("Enter numer : ");
	scanf("%d",&num);
	// Allocates the memory for 'num' elements.
	data = (int*) calloc(num,sizeof(int));
	for(i=0; i<num; i++){
		scanf("%d",data+i);
	}
	for(i=0;i<num;i++){
		if(*data< *(data+i)){
			*data = *(data+i);
		}
	}
	printf("Largest %d",*data);
}

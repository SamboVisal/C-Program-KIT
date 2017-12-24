#include<stdio.h>
#include<stdlib.h>

main(){
	//syntax ptr = (cast-type*) malloc(byte-size)
	int num,i, *ptr, sum=0;
	printf("Enter to number of elements : \n");
	scanf("%d",&num);
	ptr = (int*) malloc(num *sizeof(int);
	//we use malloc for make sure that our pc not error if run out the memeory,increase memory size num=5 it will
	// multiply INT to gain more memory... random location 
	if(ptr== NULL){
		printf("Error! memory no allocated");
	}
	
	printf("Enter element array\n");
	for(i=0; i<num; i++){
		scanf("%d",(ptr+i));
		sum = sum + *(ptr+i); //value of address
	}
	for(i=0;i<num;i++){
		
		printf("%d\n",*(ptr+i));
	}
	printf("The result is %d\n",sum);
	free(ptr);
}

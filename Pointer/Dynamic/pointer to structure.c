#include<stdio.h>
#include<stdlib.h>
struct stu{
	char name[10];
	int mark;
};
main(){
	struct stu *data;
	int i,num;
	printf("Input Number Of S : ");
	scanf("%d",&num);
	data = (struct stu*) malloc(num *sizeof(struct stu));
    for(i=0; i<num; i++){
    	printf("Input name and mark ");
    	scanf("%s",&(data+i)->name);
    	scanf("%d",&(data+i)->mark);
	}
	for(i=0; i<num; i++){
		printf("%s",(data+i)->name);
		printf("%d",(data+i)->mark);
	}

}

#include<stdio.h>

struct student{
	
	char name[20];
	int roll;
	int mark;	
	
}s[10];

main(){
	int i,n;
	
	printf("Input amount of student : ");
	scanf("%d",&n);
	for(i=0; i<n; i++){
		
		printf("Input the fuck name : \n"); scanf("%s",&s[i].name);
		printf("Input roll : "); scanf("%d",&s[i].roll);
		printf("Input mark : "); scanf("%d",&s[i].mark);
	}
	
	printf("Display\n");
	
	for(i=0; i<n; i++){
		printf("name %d \n",i+1);	
		printf(" %s  \n",s[i].name);
		printf("Roll %d\n",i+1);
		printf(" %d  \n",s[i].roll);
		printf("Marks %d\n",i+1);
		printf(" %d  \n",s[i].mark);		
		
	}

}

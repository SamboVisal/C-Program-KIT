#include<stdio.h>

struct student{
	
	char name[50];
	int roll;
	float marks;
};

main(){
	struct student s;
	
	printf("Enter Information Student\n");
	printf("Input name : \n");
	scanf("%s",&s.name);
	printf("Input roll number : \n");
	scanf("%d",&s.roll);
	printf("Input marks : ");
	scanf("%f",&s.marks);
	printf("Display the information\n");
	printf("Name is %s\n",s.name);
	printf("Roll number is %d\n",s.roll);
	printf("Marks is %.1f\n",s.marks);
	
	
}

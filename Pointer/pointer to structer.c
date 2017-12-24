#include<stdio.h>

struct student{
	
	char name[20];
	int age;
};
main(){
	
	struct student *s,st[20];

	s = st;
	
	scanf("%s",&s->name);
	scanf("%d",&s->age);
	printf("%s %d",(*s).name,(*s).age);
}

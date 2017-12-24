#include<stdio.h>

struct student{
	
	char name[20];
	int age;
};
main(){
	
	struct student *s,st[20];

	s = st;
	//Structure pointer member can also be accessed using -> operator.
	scanf("%s",&(*s).name);
	scanf("%d",&(*s).age);
	printf("%s %d",(*s).name,(*s).age);
}

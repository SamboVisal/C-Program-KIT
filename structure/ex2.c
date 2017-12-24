#include<stdio.h>
#include<conio1.h>
struct pers{
	
	char name[20],add[20];
	int role;
	int age;
	
};

main(){   

      	struct pers p;
		 	

		
		printf("Input name : "); scanf("%s",&p.name);
		printf("Input address : "); scanf("%s",&p.add);
		printf("Input role : "); scanf("%d",&p.role);
		printf("Input age :  "); scanf("%d",&p.age);
	
		
	printf("%20s%20s%20s%20s\n","Name","Address","Role","Age");
	
		
	printf("%20s%20s%20d%20d\n",p.name,p.add,p.role,p.age);	
		
	
	
	
}

#include<stdio.h>
#include<conio1.h>
struct student{
	char name[20];
	int age;
	float salary;
	
};
char ch;
main(){
do{
	clrscr();
	struct student s[20];  char ch,st; float sa; int i,qty,n=0,c;
	
	printf("1/ Grade 1 \n");
	printf("2/ Grade 2 \n");
	ch=getch();
	switch(ch){
		
		case '1' : 
				   do{
				   
					printf("1/Information\n");
					printf("2/Show Information\n");
					st=getch();
					switch(st){
						case '1' : 
						
						printf("Input Quanlity : "); scanf("%d",&qty);
					         for(i=1; i<=qty; i++){
						clrscr();
						printf("Input Name : ",i); scanf("%s",&s[n].name);
						printf("Input age  : ",i); scanf("%d",&s[n].age);
						printf("Input salary : ",i); scanf("%f",&sa); s[n].salary=sa;
						n++; 
						getch();
					               }
									break;
						case '2' :
						clrscr();								
						printf("%20s%20s%20s\n","Name","Age","Salary");
						for(c=0; c<n; c++){
							
						printf("%20s%20d%20.2f\n",s[c].name,s[c].age,s[c].salary);
						
								
						                 } 
							getch();			 	
									break;			
					
				       }
					     }while(st!='3');

					break;
		case '2' : 
					break;			
		
	}
}while(ch!='3');
}

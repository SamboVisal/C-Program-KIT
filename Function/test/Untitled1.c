#include<stdio.h>
#include<conio1.h>
main(){
	int d,e; char ch;
	printf("1/add\n");
	printf("2/Sub\n");
	printf("3/Mul\n");
	printf("4/Divi\n");
	ch=getch();
	switch(ch){
		
		case '1' :   clrscr();
					printf("Input first number : "); scanf("%d",&d);
					printf("Input seconde number : "); scanf("%d",&e);
					add(d,e);
					printf("The Sum Value is %d",add(d,e));
					 break;
		case '2' : 	 clrscr();
					printf("Input first number : "); scanf("%d",&d);
					printf("Input seconde number : "); scanf("%d",&e);
					sub(d,e);
					printf("The Sum Value is %d",sub(d,e));
					 break;
		case '3' : 
				  	 break;
		case '4' : 
					 break;
		
	}
}
int add(int d, int e){
	int sum=0;
	sum=e+d;
	return sum;
	
}
int sub(int d,int e){
	int sub=0;
	sub=d-e;
	return sub;	
}

#include<stdio.h>

main(){

	int a,b,result=0; char ch,st;
	printf("Input the first value : "); scanf("%d",&a);
	printf("Input the second value : "); scanf("%d",&b);
	printf("+ For addition\n");
	printf("- For Substract\n");
	printf("* For Multiplication\n");
	printf("/ For Division\n");
	ch=getch();
	switch(ch)
	   {
   			 
	 	case '+' :  result = a+b;
	 				printf("The Value between both numbers : %d + %d = %d",a,b,result);
		 		   break;
	 	case '-' : 
	 				result = a-b;
	 				printf("The Value between both numbers : %d - %d = %d",a,b,result);
		           break;
	 	case '*' : 
	 				result = a*b;
	 				printf("The Value between both numbers : %d * %d = %d",a,b,result);
		           break;
	 	case '/' : 
	 				result = a/b;
	 				printf("The Value between both numbers : %d / %d = %d",a,b,result);
		           break;
	 	default  : 
		 	 
	 			printf("wrong input dude!");
	 
	   }
	 
}

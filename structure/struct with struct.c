#include <stdio.h>

struct Employee
{
   char ename[20];
   int empno;
   float salary;
   struct date
       {
       int date;
       int month;
       int year; 
       }d;
}emp;

main(){
	
	printf("Enter employee name : ");   scanf("%s",&emp.ename);
	printf("Enter employee Phone : ");	scanf("%d",&emp.empno);
	printf("Enter employee salary : ");	scanf("%f",&emp.salary);
	printf("Input the year : ");	scanf("%d",&emp.d.year);
	
	
	
}

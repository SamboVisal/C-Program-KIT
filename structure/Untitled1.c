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
       }doj;
}emp;

main()
{
printf("\nEnter the name :");
scanf("%s",emp.ename);
printf("\nEnter the employee number :");
scanf("%d",&emp.empno);
printf("\nEnter the date of joining in the format Date : Month : year");
scanf("%d%d%d",&emp.doj.date,&emp.doj.month,&emp.doj.year);
printf("\n Enter the salary :");
scanf("%f",&emp.salary);

printf("\nEmployee Name   : %s",emp.ename);  
printf("\nEmployee Number    : %d",emp.empno);  
printf("\nEmployee Salary : %f",emp.salary);  
printf("\nEmployee DOJ    : %d/%d/%d", \
         emp.doj.date,emp.doj.month,emp.doj.year);  
    
return 0;
}


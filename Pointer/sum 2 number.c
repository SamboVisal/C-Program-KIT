#include<stdio.h>
#include<stdlib.h>
int main() {
   int *ptr1, *ptr2,num2,num1;
   ptr1=&num1;
   ptr2=&num2;
   int sum=0;

   printf("\nEnter two numbers : ");
   scanf("%d %d",&num1,&num2);

   sum =*ptr1+*ptr2;

   printf("Sum = %d",sum);
   return (0);
}


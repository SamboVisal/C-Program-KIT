/* Program display multiplication from 1 to 15 */
 
#include<stdio.h>
#include<conio.h>
main()
{
   int j,i;
   printf("Multiplication table from 1 to 15 \n\n");
   for(i=1;i<=10;i++)
   {
     for(j=1;j<=15;j++)
	 printf("%5d",i*j);
     printf("\n");
   }
   getch();
}

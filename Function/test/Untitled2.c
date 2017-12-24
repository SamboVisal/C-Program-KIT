#include<stdio.h>
#include<conio1.h>
void main()
{
  int a,b;
  void swap(int *,int *);
  printf("enter the value of a & b\n");
  scanf("%d%d",&a,&b);
  printf("Before Swapping \n");
  printf("a = %d\nb=%d\n",a,b);
  swap(&a,&b);
  printf("After Swapping \n");
  printf("a = %d\nb=%d\n",a,b);
  getch();
}
 
  void swap(int *x,int *y)
  {
    int t;
    t=*x;
    *x = *y;
    *y = t;
  }



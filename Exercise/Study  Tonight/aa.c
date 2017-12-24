#include<stdio.h>

/*
int a = 10 ;
int *ptr ;        //pointer declaration
ptr = &a ;        //pointer initialization
or,
int *ptr = &a ;
int a,*p;
a = 10;
p = &a; 
printf("%d",*p);    //this will print the value of a. 

printf("%d",*&a);  //this will also print the value of a.

printf("%u",&a);  //this will print the address of a.

printf("%u",p);  //this will also print the address of a.

printf("%u",&p);  //this will also print the address of p.
*/
int i;
int a[5] = {1, 2, 3, 4, 5};
int *p = a;  // same as int*p = &a[0]
main(){
	
for (i=0; i<5; i++)
{
 printf("%d", *(p+i));
 
}

}

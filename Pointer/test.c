#include<stdio.h>

int i;
int a[5] = {1, 2, 3, 4, 5};
int *p = a;  // same as int*p = &a[0]
main(){
	
printf("%d",*(p+1));

}

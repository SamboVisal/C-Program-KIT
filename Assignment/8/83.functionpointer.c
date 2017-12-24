#include<stdio.h>

main(){
	int a,b;
	
	printf("enter number : "); scanf("%d %d",&a,&b);
	fac(&a,&b);
	printf("%d %d",a,b);
}
int fac(int *a, int *b){
	
	int t;
	t = *a; *a=*b; *b=t;
	return;
}

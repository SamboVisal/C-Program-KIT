#include<stdio.h>

main(){
	int a=0,b=1,i,c,n;
	printf("This program is about Fibonacci\n");
	printf("enter number : "); scanf("%d",&n);
	printf("%d %d\t",a,b);
	for(i=1;i<=n;i++){
		c = a + b;	
		a = b;
		b = c;
		printf("%d\t",c);
	}
	
}

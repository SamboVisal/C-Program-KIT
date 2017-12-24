#include<stdio.h>

main(){
	int a,b,c;
	printf("Find the largest among three numbers\n");
	printf("enter first : "); scanf("%d",&a);
	printf("enter second : "); scanf("%d",&b);
	printf("enter third : "); scanf("%d",&c);
	if(a>b && a>c){
		printf("a is the largest number %d",a);
	}
	else if(b>a && b>c){
		printf("b is the larges number %d",b);
	}
	else {
		printf("c is the largest number %d",c);
	}
	
}

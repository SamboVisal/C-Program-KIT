#include<stdio.h>

int fac();
main(){
	int rem,rev=0,c;
	c=fac();
    while(c>0){
		
		rem=c%10;
		rev=rev*10+rem;
		c/=10;
	}	
	printf("%d",rev);
}
int fac(){
	int a;
	printf("Input Number : ");  scanf("%d",&a);	
	
	return a;	
	
}

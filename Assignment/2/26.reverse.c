#include<stdio.h>

main(){
	int n,re=0,r,c;
	printf("reverse of digit\n");
	printf("enter number : "); scanf("%d",&n);
	c=n;
	while(n!=0){
		r = n%10;
		re = re * 10 + r;
		n/=10;
		
	}		
	printf("%d",re);
	if(c==re){
		printf("this is palindrom");
	}
	else
	printf("not");
}

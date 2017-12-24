#include<stdio.h>

main(){
	int c,n,r,re=0;
	printf("Armstrong number\n");
	printf("enter number : "); scanf("%d",&n);
	c=n;
	while(n!=0){
		r =n%10;
		re = re +(r*r*r);
		n/=10;
	}
	if(re==c)
	printf("this is armstrong");
	else
	printf("not armstrong");
}

#include<stdio.h>

main(){
	int n,re=0,r;
	printf("Digit summation\n");
	printf("enter number : "); scanf("%d",&n);
	while(n!=0){
		r =n%10;
		re = re +r;
		n/=10;
	}
	printf("%d",re);
}

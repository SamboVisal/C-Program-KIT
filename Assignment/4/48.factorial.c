#include<stdio.h>

main(){
	int n;
	printf("enter number to factorail : \n");  scanf("%d",&n);
	fac(n);
	printf("the result of factorial %d is %d",n,fac(n));
}
int fac(int n){
	int result = 1,i=1;
	if(n==0)
	return 1;
	while(i<=n){
		result = result * i;
		i++; 
	}
	return result;
}

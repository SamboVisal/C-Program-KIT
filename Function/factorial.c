#include<stdio.h>
long result();
main(){
	//no argument but return
	long num=1,fac; 	
	num=result();
	while(num!=0){
		fac=fac*num;
		num--;
	}
	printf("The Factorial of is %ld",fac);
}
long result(){
	int k;
	printf("Input Number to factorial : "); scanf("%d",&k);	
	return k;
	
}

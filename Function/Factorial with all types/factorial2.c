#include<stdio.h>
/*
int fac(int n);
main(){
	int n;
	//with argument but no return
	printf("Input number : "); scanf("%d",&n);
	fac(n);
	return 0;
}
int fac(int n){
	
	int result=1;
	while(n!=0){
		result = result * n;
		n--;
	}
	printf("the factorial is %d",result);
}
*/

main(){
	//no argument and no return
	fac();
	return 0;
}
int fac(){
	int result=1,n;
	printf("Input number : ");
	scanf("%d",&n);
	while(n!=0){
		result=result*n;
		n--;
	}	
	printf("The factorial is %d",result);
	
}




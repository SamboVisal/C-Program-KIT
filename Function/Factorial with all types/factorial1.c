#include<stdio.h>

main(){
	//with argument and return value
	int n,num;
	printf("Input number : "); scanf("%d",&n);
	num=fac(n);
	printf("The factorial number is %d",num);
}
int fac(int k){
	int sa=1;
	if(k==0)
	return 1;
	while(k!=0){
		sa= sa * k;
		k--;
	}
		return sa;
}
/*
int fac();
main(){
	//no argument but return value
	int num,result=1;
	num=fac();
	while(num!=0){
		
		result = result * num;
		num--;
	}
	printf("The factorial is %d",result);
	
}
int fac(){
	int n;
	printf("Input Number : "); scanf("%d",&n);
	return n;	
}*/

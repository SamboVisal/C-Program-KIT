#include<stdio.h>

int fac(int a);
main(){
	int a;
	scanf("%d",&a);
	fac(a);
	printf("%d",fac(a));
}
int fac(int a){
	int result=0;
	if(a==0)
		return 1;
	while(a>0){
		
		return a * fac(a-1);
		
	}
	
	
}

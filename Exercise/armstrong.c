#include<stdio.h>

main(){
	int d,a,rem,res=0;
	printf("Input the number to check armstrong or not : "); scanf("%d",&a);
	d=a;
	while(d!=0){
		
		rem=d%10;	
		res=res+(rem*rem*rem);
		d=d/10;
		
	}
	if(res==a)
	printf("armstrong");
	else
	printf("not");
	
	
	
}

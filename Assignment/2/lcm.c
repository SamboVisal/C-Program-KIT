#include<stdio.h>

main(){
	int num=1,a,b;
	printf("enter first number : ");  scanf("%d",&a);
	printf("enter second number : ");  scanf("%d",&b);
	num = (a>b)  ?  a : b;
	
	while(1){
		
		if(num%a==0 && num%b==0){
			printf("the less common multiple is %d",num);
			break;
		}
		num++;
	}
}

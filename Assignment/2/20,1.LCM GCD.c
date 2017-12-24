#include<stdio.h>


main(){
	int a,b,c,i,lcm;	
	printf("enter first number : "); scanf("%d",&a);
	printf("enter second number : "); scanf("%d",&b);
	for(i=1;i<=a && i<=b;i++){
		if(a%i==0 && b%i==0){
			c=i;
		}
	}
	printf("the greatest common division is %d\n",c);
	lcm = a*b / c;
	printf("the less common multiple is %d",lcm);
}

#include<stdio.h>
#include<math.h>

main(){
	int oc,i; int decimal=0,r;
	printf("Input Octal number : "); scanf("%d",&oc);
	
	i=0;
	while(oc!=0){
		
		r=oc%10;
		decimal += r * pow(8,i);
		oc/=10;
		i++;
	}
	printf("The Decimal Number is %d",decimal);
}

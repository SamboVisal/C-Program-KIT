#include<stdio.h>
#include<math.h>
void dec(int oc);
main(){
	int oc;
	printf("Input Octal Value : "); scanf("%d",&oc);
	dec(oc);
}
void dec(int oc){
	int i,k,r; long long bin[100];  int decimal;
	while(oc!=0){
		
		r=oc%10;
		decimal += r * pow(8,i);
		oc/=10;
		i++;
	}
	i=0;
	printf("The Binary Number is : ");
	while(decimal!=0){
		
		r=decimal%2;
		bin[i]=r;
		decimal/=2;
		i++;	
	}
	for(k=i-1; k>=0; k--){
		printf("%lld",bin[k]);
	}
	
}

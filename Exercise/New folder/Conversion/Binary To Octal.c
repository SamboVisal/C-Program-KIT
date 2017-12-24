#include<stdio.h>
#include<math.h>
void bin(long long oc);
main(){
	long long oc;
	printf("Input Binary Number : "); scanf("%lld",&oc);
	bin(oc);
}
void bin(long long oc){
	int i,j,k,z;
	int decimal=0,octal[100],r;
	 
	while(oc!=0){
		r=oc%10;
		decimal += r * pow(2,i);
		oc/=10;
		i++;
	}
//	printf("The value decimal is %d\n",decimal);
	i=0;
	printf("The Octal Value is : ");
	while(decimal!=0){
		
		r=decimal%8;
		octal[i]=r;
		decimal/=8;
		i++;
	}
	for(k=i-1; k>=0; k--){
	printf("%d",octal[k]);	
	}
	
}

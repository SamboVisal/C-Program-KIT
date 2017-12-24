#include<stdio.h>
#include<math.h>
void dec(int de);
main(){
	int de;
	printf("Input Octal Number : ");  scanf("%d",&de);
	dec(de);
}
void dec(int de){
	int i,r; int decimal=0;
	i=0;
	while(de!=0){
		decimal += (de%10) * pow(8,i);
		de/=10;
		i++;
	}
	printf("The Decimal Number is %d",decimal);
}

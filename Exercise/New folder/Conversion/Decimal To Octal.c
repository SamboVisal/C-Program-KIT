#include<stdio.h>
#include<math.h>

int dec(int de);
main(){
	int d;
	printf("Input Decimal Value : "); scanf("%d",&d);
	dec(d);
//	printf("%d",dec(d));
}
int dec(int de){
    int octal[100],i,j,r;
	i=0;
	while(de!=0){
		r=de%8;
		octal[i]=r;
		de/=8;
		i++;
	}
	for(j=i-1; j>=0; j--){
		printf("%d",octal[j]);
	}
} 

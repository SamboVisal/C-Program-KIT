#include<stdio.h>
#include<math.h>
void dec(int d);
main(){
	int d;
	printf("Input Decimal Value : "); scanf("%d",&d);
	dec(d);
}
void dec(int d){
	 int i=0,k,c,bin[100000],r; 
	printf("The Binary Number is : \n");
	i=0;
	while(d!=0){
		r=d%2;
		bin[i]=r;
		d/=2;
		i++;					
	}
	for(k=i-1; k>=0; k--){
		printf("%d",bin[k]);
	}
	
}

#include<stdio.h>

int str(int n);
main(){
	int num;
	printf("Enter the number : "); scanf("%d",&num);
	str(num);
	printf("%d",str(num));
}
int str(int n){
	
	while(n>0){
		
		return n * str(n-1);
	}
	return 1;
}

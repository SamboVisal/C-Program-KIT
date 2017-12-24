#include<stdio.h>

main(){
	int n,c;
	printf("Count number of digit\n");
	printf("enter number : "); scanf("%d",&n);
	while(n!=0){
		
		n/=10;		
		c++;
	}
	printf("%d",c);
}

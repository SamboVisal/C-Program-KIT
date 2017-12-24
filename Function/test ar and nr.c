#include<stdio.h>
int prime(int n);
main(){
	int n;
	printf("Input number : "); scanf("%d",&n);
	prime(n);
	
}
int prime(int k){
	int i,c;
	for(i=2; i<k; i++){
		if(k%i==0){
			c=1;
		}
		
	}
	if(c==1)
	printf("Not");
	else
	printf("Yes");
}

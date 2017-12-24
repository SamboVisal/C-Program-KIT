#include<stdio.h>
int prime();
main(){
	int num,i,c=0;
	num=prime();
	for(i=2; i<=num/2; i++){
		if(num%i==0){
			c=1;
		}
	}
	if(c==1)
	printf("Not");
	else 
	printf("Yes");
}
int prime(){
	int n;
	printf("input number : "); scanf("%d",&n);
	return n;
	
}

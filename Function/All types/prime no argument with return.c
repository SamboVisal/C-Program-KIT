#include<stdio.h>
int prime();
int main(){
	int i,m=0,num;
	
	num=prime();
	for(i=2; i<=num/2; i++){
		if(num%i==0){
			m=1;
			break;
		}
	}
	if(m==1)
		printf("%d Is not prime number",num);
	else
		printf("%d Is prime number",num);
		
	
}
int prime(){
	int k;
	printf("Enter positive number : "); scanf("%d",&k);
	return k;
}

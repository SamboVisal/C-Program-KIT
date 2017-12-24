#include<stdio.h>

main(){
	
	str();
	
}
int str(){
	int n,c=0,i;
	scanf("%d",&n);
	for(i=2;i<=n/2;i++){
		if(n%i==0){
			c=1;
		}
		
	}
	if(c==0)
	printf("yes");
	else
	printf("no");
}

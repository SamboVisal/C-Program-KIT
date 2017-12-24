#include<stdio.h>
void prime();
main(){
	
	prime();
	return 0;	
}
void prime(){
	int i,k,n;
	printf("Input number : "); scanf("%d",&n);
	for(i=2; i<=n/2; i++){
		if(n%i==0){
			k=1;
		}
		
	}
	if(k==1)
	printf("Not");
	else
	printf("Prime");
	
}

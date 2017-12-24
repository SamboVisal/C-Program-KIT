#include<stdio.h>
int str();
main(){
	int i,c=0,num;
	num=str();
	for(i=2;i<=num/2;i++){
		
		if(num%i==0){
			c = 1;
		    
		}
	}	
	if(c==0)
	printf("yes");
	else
	printf("no");
}
int str(){
	int n;
	scanf("%d",&n);
	return n;

}

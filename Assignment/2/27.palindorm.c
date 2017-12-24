#include<stdio.h>

main(){
	int c,n,r,rev=0;
	printf("Palindrom number\n");
	printf("enter number : "); scanf("%d",&n);
	c=n;
	while(n!=0){
		r = n%10;
		rev = rev*10+r;
		n/=10;
		
	}
	if(c==rev)
	printf("this is palindrom number");
	else 
	printf("no");
}

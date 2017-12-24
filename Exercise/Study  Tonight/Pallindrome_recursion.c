#include<stdio.h>
void pa(int a);

//static int i;
main(){
	int a;
	scanf("%d",&a);
	//i = a;
	pa(a);
}
//static int rev=0;
void pa(int a){
	int rem,c,rev=0;
	c=a;
	rem=a%10;
	rev=rev*10+rem;
	a/=10;
	if(a>0){
		
		return pa(a);
	}
	else{
		
		if(rev==c){
			printf("Yes");
		}
		else{
			printf("No");
		}
	}
}

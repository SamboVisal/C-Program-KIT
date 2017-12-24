#include<stdio.h>


main(){
	int a,b,i,res;
	
	printf("Enter two intergers : "); scanf("%d %d",&a,&b);
	
	for(i=1; i<=a && i<=b ; i++){
		
		if(a%i==0 && b%i==0)
		
		res=i;
		
	}
	
	printf("The greatest common division is %d",res);
	return 0;
}

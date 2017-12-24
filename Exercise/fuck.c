#include<stdio.h>


main(){
	int a=0,b=1,s,f;
	
	printf("Input Number : "); scanf("%d",&s);
	
	printf("Your fabiocci is %d %d",a,b);
	
	while(f<=s)
	{
	
		a=b;
		b=f;
		f=a+b;
			printf(" %d",f);
			
		
	}
	
}

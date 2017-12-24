#include<stdio.h>

main(){
	int f,s,j,c,i;
	printf("prime number between 2 numbers\n");
	printf("enter first : "); scanf("%d",&f);
	//printf("enter second : "); scanf("%d",&s);

		for(j=2;j<=f/2;j++){
			if(f%j==0){
				c = 1;
				break;
			}

		}
		if(c==1)
		printf("prime");		
		else
		printf("no");
		
}

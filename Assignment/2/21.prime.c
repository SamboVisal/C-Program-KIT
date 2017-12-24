 #include<stdio.h>

main(){
	int f,s,j,c,i;
	printf("prime number between 2 numbers\n");
	printf("enter first : "); scanf("%d",&f);
	printf("enter second : "); scanf("%d",&s);
	for(i=f;i<=s;i++){
		c=0;
		for(j=2;j<=i/2;j++){
			if(i%j==0){
				c =1;
				break;
			}

		}
				if(c==0)
			printf("%d ",i);	
	}
		
}

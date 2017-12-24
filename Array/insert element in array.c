#include<stdio.h>

main(){
	int b[30],i,a,num,loc;
	printf("Input Number of array : "); scanf("%d",&a);
	printf("Input number of those array : ");
	
	for(i=0; i<a; i++){
		
		scanf("%d",&b[i]);
	}
	printf("Input number to be inserted : ");
	scanf("%d",&num);
	printf("Input the location to be changed : ");
	scanf("%d",&loc);
	if(loc>a){
		printf("Not possible to add");
	}	
	else{
		for(i=a-1; i>=loc-1; i--){
			b[i+1]=b[i];
		}
		b[loc-1]=num;
	}
	for(i=0;i<=a;i++){
		printf("%d\n",b[i]);
	}
}

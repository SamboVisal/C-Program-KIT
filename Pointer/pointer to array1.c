#include<stdio.h>

main(){
	int s[10],sum=0,i;
	for(i=0; i<6; i++){
		
		scanf("%d",(s+i)); // this is equivalent to &s[i];
	}
	for(i=0; i<6; i++){
		
		sum = sum + *(s+i);  // this is equivalent to s[i];
	}
	printf("%d",sum);
}

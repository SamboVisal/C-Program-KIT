#include <stdio.h>

int main(void){
	int i,j,k;
	int nor = 5;
	
	scanf("%d", &nor);
	
	for(i=0; i<nor; i++){
		for(k=nor; k>i; k--){
			printf(" ");
		}
		for(j=0; j< i*2+1; j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
	
}

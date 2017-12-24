#include<stdio.h>

main(){
	int de;
	printf("enter decimal : "); scanf("%d",&de);
	oc(de);
	
}
int oc(int de){
	int r,n,d[100],k;
	n=0;
	while(de!=0){
		
		r=de%8;
		d[n]=r;
		de/=8;
		n++;
	}
	for(k=n-1; k>=0; k--){
		printf("%d",d[k]);
	}
	
}

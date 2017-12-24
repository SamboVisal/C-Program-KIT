#include<stdio.h>


main(){
	int i,a[100],n,m;
	printf("enter element : "); scanf("%d",&n);
	printf("enter number of %d element: ",n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	m=n-1;
	f(m);
	printf("sum= %d",f(m));
}
int f(int a[],int m){
	if(m==0) return 0;
	else
	return a[m] + f(a,m-1);
	
}

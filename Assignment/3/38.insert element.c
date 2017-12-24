 #include<stdio.h>

main(){
	int a[100],b[100],i,n,ne;
	printf("insert element array\n");
	printf("enter element : "); scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("enter new element : "); scanf("%d",&ne);
	printf("enter new number  : "); 
	for(i=n;i>=0;i--){
		a[i+ne]=a[i];
	}
	for(i=0;i<ne;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<ne;i++){
		a[i]=b[i];
	}
	for(i=0;i<n+ne;i++){
		printf("%d\n",a[i]);
	}
}

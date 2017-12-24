#include<stdio.h>

main()
{
	int i,n,a[100],b[10],ele,k,ne; 
	printf("Enter amount of element "); scanf("%d",&n);
	printf("Enter number of those elements ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter No. Element to add ");
	scanf("%d",&ele);
	for(i=n-1;i>ele-1;i--)
	{
		a[n]=a[n+1];
	}
	printf("Enter new number ");
	scanf("%d",&ne);
	a[ele] = ne;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

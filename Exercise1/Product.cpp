#include<stdio.h>
#include<string.h>
#include<conio.h>
main(){
	char p[100][20],ch; int i,n=0,qty[7]; float price[7];
do{	
	printf("Input Product name : \n"); scanf("%s",&p[n]);
	printf("Input Quality : \n");      scanf("%d",&qty[n]);
	printf("Input Price : \n");        scanf("%f",&price[n]);
	n=n+1;
	printf("Press Enter to continue other Exit\n");
	ch=getch();
}while(ch==13);
	printf("%20s%15s%15s\n","Product name","Quanlity","Price");
	for(i=0;i<n;i++)
	printf("%20s%15d%15.2f\n",p[i],qty[i],price[i]);
	getch();
}

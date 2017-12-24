#include<stdio.h>
#include<conio.h>
main(){
	int m,e,k,t;
	printf("Input your math score : "); scanf("%d",&m);
	printf("Input your english score : "); scanf("%d",&e);
	printf("Input your khmer score : "); scanf("%d",&k);
	t=m+e+k;
	printf("total score is %d \n",t);
	printf("your list score is\n %d\n %d\n %d\n \n",m,e,k);
	getch();
	
}

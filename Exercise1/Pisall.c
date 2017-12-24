#include<conio.h>
#include<stdio.h>
char ch; char name[100][20],sex[100][7]; int age[100],n=0,i;
main(){
do{
	
	printf("1/Input Information\n");
	printf("2/Show Information\n");
	printf("3/Search Information\n");
	printf("4/Exit");
	ch=getch(); 
	switch(ch){
		case '1' : 
				   printf("Input Name : "); scanf("%s",&name[n]);
				   printf("Input Age : "); scanf("%d",&age[n]);
				   printf("Input Sex : "); scanf("%s",&sex[n]);
				   n=n++;
		           break;
		case '2' : 
				   printf("%20s%20s%20s\n","Name","Age","Sex");
				   for(i=0;i<n;i++)
				   printf("%20s%20d%20s\n",name[i],age[i],sex[i]);
				   getch();	
		           break;
		case '3' : 
				   break;
		
	}}while(ch!='4');
}

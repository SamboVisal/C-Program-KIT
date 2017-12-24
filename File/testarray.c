#include<stdio.h>


main(){
	int i,age[100]; char ch,name[100][25];
	FILE *f;
	f=fopen("D:\\FILE\\Array.txt","w");
	do{
		
		printf("enter name : "); scanf("%s",&name);
		printf("enter age  : "); scanf("%d",&age);
		
		ch=getch();
		
	}while(ch==13);
}

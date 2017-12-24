#include<stdio.h>
#include<conio1.h>

main(){
	char name[40][20]; int n=0,i,k;
	printf("Input amount : "); scanf("%d",&n);
	printf("Enter name : ");
	for(i=0; i<=n; i++){
		gets(name[i]);
	}
    //name[i]='\0';
   for(k=0; k<=n; k++){
   	printf("%s\n",name[k]);
      }
}
/*
main(){
	char name[50][50],ch;   int i,n;
	
	do{
		clrscr();
	printf("Input name : ");
	gets(name[n]);
	n++;
	printf("Enter again");
	ch=getch();
   }while(ch==13);
   name[i]='\0';
   for(i=0; i<n; i++){
   	printf("%s\n",name[i]);
   	
   }
}*/

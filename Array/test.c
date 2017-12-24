#include<stdio.h>
#include<string.h>
#include<conio1.h>
char x[20],name[100][20],st,ch; int age[100],ph[100],i,n;
main(){

do{
	clrscr();	
	
	printf("1/ Input Information");
	printf("2/ Show  Information");
	printf("3/ Delete Information");
	ch=getch();
	switch(ch){
		
		case '1' : 
				do{
				
					clrscr();
					a:
					printf("\nInput Name : "); scanf("%s",x);
							for(n=0;n<i;n++){
							
								if(strcmp(x,name[n])==0){
								printf("Name already exists\n");	
								goto a;
							   } 								
						    }
							strcpy(name[i],x);
					printf("Input Age  : "); scanf("%d",&age[i]);
					printf("Input Phone : "); scanf("%d",&ph[i]);
					i++;
					printf("Enter to continue other exit");
					st=getch();
			   }while(st==13);
					break;
		case '2' : clrscr();
					printf("%20s%20s%20s\n","NAME","AGE","PHONE");
					for(n=0;n<i;n++){
					printf("%20s%20d%20d\n",name[n],age[n],ph[n]);	
						
					}
					getch();
					break;
		case '3' : clrscr();
					int f,j,a; char c[20];
					printf("Input NAME to PHNONE : "); scanf("%d",&f);
					a=0;
					for(n=0;n<i;n++){
						if(ph[n]==f) a=1;
							for(j=n;j<i;j++){
							ph[j]=ph[j+1];	
							age[j]=age[j+1];
							strcpy(name[j],name[j+1]);	
							}
					}
					if(a==0){
						printf("NOt Found");
					}
					else{
						printf("Yeah");
						i--;
					}
					break;
	}
	
	getch();
}while(ch!='4');
}

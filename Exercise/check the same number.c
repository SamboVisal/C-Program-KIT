#include<stdio.h>
#include<conio1.h>
#include<string.h>
main(){
	  int i,n,age,d; char ch; char name,x[20];
	  
		        do{
				    
					  aaa:
					  clrscr();
					printf("Input ID   : ");   scanf("%d",&d[i]);
					printf("Input Name : ");   scanf("%s",&x);
					for(i=0; i<n; i++){
						if(strcmp(name[n],x)==0)
						goto aaa;
						getch();
					}
					strcpy(name[i],x);
					printf("Input Age  :" );   scanf("%d",&age[i]);
					i++;
							getch();	
				}while(ch==13);
	
	
	         printf("%20s%20s%20s\n","ID","Name","Age");
		     for(i=0; i<n; i++)
		     printf("%20d%20s%20d\n",d[i],name[i],age[i]);
		     getch();
	getch();
}

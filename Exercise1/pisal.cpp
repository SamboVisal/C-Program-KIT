#include<conio.h>
#include<stdio.h>
#include<string.h>

main(){
    int id[100][20],n=0,i; int ph[100][20],j,q,m; char na[100][20],sex[100][7],ch,st;    	    
 do{
 	
	printf("1/Input Information\n");
	printf("2/Show  Information\n");
	printf("3/Delete Information\n");
	printf("4/Exit");
	ch=getch();
	switch(ch){
		
		case '1' : do{ 
					printf("Input Id : "); scanf("%d",&id[n]);
					printf("Input Name : "); scanf("%s",&na[n]);
					printf("Input sex : "); scanf("%s",&sex[n]);
					printf("Input Phone : "); scanf("%d",&ph[n]);
					n=n++;
					printf("press enter to continue or ESC to exit");
					st=getch();
				    }while(st!=27);
					break;
		case '2' : 
					for(i=0;i<n;i++){
						for(j=i+1;j<n){
						if(strcpy(id[i],id[j])>0){
						strcmp(m,na[i]); strcmp(na[i],na[j]); strcmp(na[j],na[i]);
						q=id[i]; id[i]=id[j]; id[j]=q;
						q=ph[i]; ph[i]=ph[j]; ph[j]=q;	
						}	
					}
					printf("%20s%20s%20s%20s","ID","Name","Sex","Phone");
					for(i=0;i<n;i++){
					printf("%20d%20s%20s%20d",id[i],na[i],sex[i],ph[i]); } }
					break;
		case '3' : 
					break;
		
		
		
	}
	
	
}while(ch!='4');
}

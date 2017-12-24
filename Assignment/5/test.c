#include<stdio.h>
#include<conio1.h>

main(){
	char ch,st;
	int j[100]; int pro,eng,n,i,k,id,total=0;
	do{
		
		printf("input amount \n");
		printf("input score  \n");
		printf("show score \n");
		ch=getch();
		switch(ch){
		
		case '1' : 
					do{
						
						printf("input id : "); scanf("%d",&j[i]);
						i++;
						st=getch();
					}while(st==13);
					break;
		case '2' : clrscr(); k=0;
					printf("input id : "); scanf("%d",&id);
					for(n=0;n<i;n++){
						if(id==j[n]){ k=1;
					printf("program : "); scanf("%d",&pro);
					printf("english : "); scanf("%d",&eng);	
					total = pro+eng;						
						}
					}
					if(k==0){
						printf("try again\n");
						getch();
					}
					getch();
					break;
		case '3' : clrscr();
					printf("%20s%20s%20s\n","ID","Program","English");
					for(n=0;n<i;n++){
						printf("%20d%20d%20d%20d\n",j[n],pro,eng,total);
					}
					getch();
					break;
		case '4' : break;
	}
	}while(ch!='5');
	
}

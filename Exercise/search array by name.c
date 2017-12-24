#include<stdio.h>
#include<conio1.h>
#include<string.h>

main(){   char ch,st,p[200],name[20][200],x[20];  int i=0,n=0,age[20],j,q,b=0; long phone[20];
do{ clrscr();
	
	printf("1/ Input Information\n");
	printf("2/ Show Information\n");
	printf("3/ Search Information\n");
	printf("4/ Delete information\n");
	printf("5/Exit");
	ch=getch();
	switch(ch){
	case '1' :
	    do{
    	 clrscr();
		printf("Input name : ");  fflush(stdin); scanf("%s",&name[n]);
		printf("Input age : ");   scanf("%d",&age[n]);
		printf("Input phone : "); scanf("%ld",&phone[n]);
		n++;
		printf("Press Enter to add more dude!");
		st=getch();	
		}while(st==13);
			break;	
	case '2' : 
		
		    for(i=0; i<n; i++){
		 	  for(j=i+1; j<n; j++)
			 if(strcmp(name[i],name[j])>0){
			 strcpy(p,name[i]);	
		 	 strcpy(name[i],name[j]);
			 strcpy(name[j],p);
			 q=age[i]; age[i]=age[j]; age[j]=q;
			 q=phone[i]; phone[i]=phone[j]; phone[j]=q;
		   } }
		     clrscr();
		     printf("%20s%20s%20s\n","Name","Age","Phone");
		     for(i=0; i<n; i++)
		     printf("%20s%20d%20ld\n",name[i],age[i],phone[i]);
		     getch();
			break;
	case '3' : 
			 clrscr();
			 b=0;
			 printf("Input name to search : "); scanf("%s",&x);
			 for(i=0; i<n; i++){
			  
			  if(strcmp(name[i],x)==0){ 
			  	
			  	printf("%20s%20s%20s\n","Name","Age","Phone");
			  	printf("%20s%20d%20ld",name[i],age[i],phone[i]);
			  	b=1;
			  }
			  
			  }
			  
			  if(b==0){
			  
			  	printf("Not found");
			  }
			  	
			  else {
			  	printf("\nHere You are");
			  }
			  
			 getch();
			break;
	
	case '4' :
			clrscr();b=0;
			  printf("Input name to delete : "); scanf("%s",&x);
			 for(i=0; i<n; i++){
			   
			  //for(j=i+1; j<n; j++){ 
			  	if(strcmp(name[i],x)==0) 
			  	for(j=i;j<n;j++){
				  
				  	b=1;
					strcpy(name[j],name[j+1]);
					age[j]=age[j+1];
					phone[j]=phone[j+1];	
				  }
				  }//}
				  
				  if(b==0){
				  
				  	printf("Not found");
				  	}
				  else{ printf("Delete successfully"); 
				  n=n-1;
				  
				  }
				  getch();
		    break;
	       }
}while(ch!='5');
}

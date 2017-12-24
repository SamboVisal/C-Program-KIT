#include<stdio.h>
#include<conio1.h>
#include<String.h>
main(){ char name[20][200],ch,p[200]; int age[20],n=0,q,j,i; long phone[20]; 
do{
		clrscr();
		printf("Input name : ");  fflush(stdin); scanf("%s",&name[n]);
		printf("Input age : ");   scanf("%d",&age[n]);
		printf("Input phone : "); scanf("%ld",&phone[n]);
		n++;
		ch=getch();
  }while(ch==13);
  
		   for(i=0; i<n; i++){
		   for(j=i+1; j<n; j++)
		   if(strcmp(name[i],name[j])>0){
		   strcpy(p,name[i]); 
		   strcpy(name[i],name[j]); 
		   strcpy(name[j],p); 	
		   q=age[i]; age[i]=age[j]; age[j]=q;	
		   q=phone[i]; phone[i]=phone[j]; phone[j]=q;	
		}}
		clrscr();
		printf("%20s%20s%20s\n","Name","Age","Phone");
		for(i=0; i<n; i++)
		printf("%20s%20d%20ld\n",name[i],age[i],phone[i]);
		
}

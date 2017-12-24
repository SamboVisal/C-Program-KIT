#include<stdio.h>
#include<conio1.h>
#include<String.h>
struct pers{
	
	char name[20];
	int qty;
	int each;
	float price;
};
char x[20];
main(){
		struct pers p[20]; 
		char ch; 
		int i=0,n;
		float mm,total;	
  do{  aaa:
      clrscr();
  	  printf("Input Product Name : \n" ); fflush(stdin); scanf("%s",&x);
  	  for(n=0;n<i;n++)
		if(strcmp(p[n].name,x)==0){
  	  		
  	  	   printf("The name is already exists");
  	  	   getch();
  	  	   goto aaa;
		}
		strcpy(p[i].name, x); 
  	  printf("Input Quanlity : \n" ); scanf("%d",&p[i].qty);
  	  printf("Input Price : \n"); scanf("%f",&p[i].price); // p[i].price = mm;
  	  i++;	
  	  
  		printf("Press Enter to continue other to see result\n");
		  ch=getch();	
  }while(ch==13);
	clrscr();
	total=0;	
	printf("%20s%20s%20s%20s\n","Product","Quanlity","Price","Total");
	for(n=0; n<i; n++){
	printf("%20s%20d%20.2f$%20.2f$\n",p[n].name,p[n].qty,p[n].price,p[n].price*p[n].qty);
	total=total+p[n].price*p[n].qty;
	}
	
	printf("The Total is %.2f$",total);
	getch();	
}

#include<stdio.h>
#include<conio.h>
void main(){ char ch,name[20]; int qty; float total=0,price;
	do{
	printf("Welcome To My Shop, Please Enjoy\n");
	printf("Buy form 5$ to 10$ discount 5% ,10$ to 40$ discount 10% \n");
	printf("Press Enter to continue to our shop\n");
    }while(!kbhit);
    getch();
do{
    printf("1/Shopping\n");
    printf("2/Price\n");
    printf("3/Exit program\n");
	ch=getch();
	switch(ch){
		case '1' :  printf("Input name  : "); gets(name);
					printf("Input Quanlity : "); scanf("%d",&qty);
					printf("Input Price : "); scanf("%f",&price);
					total=price*qty;
					if(total<='5'){
						
					}
		          break;
		case '2' :  
					printf("%20s%20s%20s%20s\n","Name","Quanlity","Price","Total");
					printf("%20s%20d%20.02f%20f",name,qty,price);
		          break;
		//default : printf("please input the valid number");
		
		
	}}while(ch!='3');
	
}

#include<stdio.h>
#include<conio1.h>
#include<math.h>
#include<conio.h>

void bin(long long b);
long long bin1(long long b1);
void dec(int d);
void de(int d);
void deci(int oc);
void decim(int oc);
main(){
	char ch,c; long long b,b1; int d,oc;
do{
//	_setcursortype(_NOCURSOR);
	clrscr();
	gotoxy(38,1);
	printf("-----Calculation System Please Enjoy-----");
	gotoxy(38,3);
	printf("***Press Any Key Numbers That Have Shown***\n");
	printf("------------------------------------------------------------------------------------------------------------------------");
	gotoxy(55,5);
	printf("Welcome");
	gotoxy(4,8);
	printf("1/All Conversion");
	gotoxy(4,9);	
	printf("2/Calculator");
	gotoxy(4,10);
	printf("3/About Us");
	gotoxy(4,11);
	printf("4/Exit Program\n");
	ch=getch();
	switch(ch){
		
		case '1' : 
				do{
					 clrscr();
			        gotoxy(38,1);
	                printf("-----Conversion System Please Enjoy-----\n");
					printf("1/ Conversion Binary To Decimal\n");
					printf("2/ Conversion Binary To Octal\n");
					printf("3/ Conversion Decimal To Binary\n");
					printf("4/ Conversion Decimal To Octal\n");
					printf("5/ Conversion Octal To Binary\n");
					printf("6/ Conversion Octal To Decimal\n");
					printf("7/ Back To Menu\n");
					c=getch();
					switch(c){
						
						case '1' : clrscr();
			                       gotoxy(38,1);
	                               printf("-----Conversion Binary To Decimal Please Enjoy-----\n");
	                			   gotoxy(3,4);
								   printf("Input The Binary Number : ");  scanf("%lld",&b);	
								   bin(b);
								   getch();
									break;
						case '2' : clrscr();
			                       gotoxy(38,1);
	                               printf("-----Conversion Binary To Octal Please Enjoy-----\n");
								   gotoxy(3,4);
								   printf("Input The Binary Value : ");   scanf("%lld",&b1);
								   bin1(b1);				 	
								   getch();	
									break;
						case '3' : clrscr();
			                       gotoxy(38,1);
	                               printf("-----Conversion Decimal To Binary Please Enjoy-----\n");	
								   gotoxy(3,4);
								   printf("Input The Decimal Value : "); scanf("%d",&d);
								   dec(d);	
								   getch();					
									break;
						case '4' : clrscr();
			                       gotoxy(38,1);
	                               printf("-----Conversion Decimal To Octal Please Enjoy-----\n");	
								   gotoxy(3,4);
								   printf("Input Decimal Value : ");  scanf("%d",&d);
								   de(d);
								   getch();						
									break;
						case '5' : clrscr();
			                       gotoxy(38,1);
	                               printf("-----Conversion Octal To Binary Please Enjoy-----\n");
								   gotoxy(3,4);
								   printf("Input The Octal Value : ");  scanf("%d",&oc);
								   deci(oc);	
								   getch();						
									break;
						case '6' : clrscr();
			                       gotoxy(38,1);
	                               printf("-----Conversion Octal To Decimal Please Enjoy-----\n");
								   gotoxy(3,4);
								   printf("Input The Octal Value : ");  scanf("%d",&oc);
								   decim(oc);		
								   getch();						
									break;
						case '7' : break;
						default : printf("Wrong Input Dude\n");
						getch();
					}
			       }while(c!='7');
						
					break;
		case '2' : 
		
					break;
		case '3' : clrscr();
					gotoxy(52,1);
					printf("***About Us***\n");
					printf("-------------------------+++++++++++++++++++++++++*****************++++++++++++++++++++++++++++-------------------------");
					
					getch();		
					break;
		case '4' : 
		
					break;
		default : printf("Wrong Input Dude");
					getch();						
	}
	
	
}while(ch!='4');
}
void bin(long long b){
	long r=0; int i; int de=0;
	while(b!=0){
		r=b%10;
	    b=b/10;
		de += r*pow(2,i);
		i++;
	}
	gotoxy(3,6);
	printf("The Decimal Value is %d",de);
}
long long bin1(long long b1){
	int i,j,k,z;
	int decimal=0,octal[100],r;
	 
	while(b1!=0){
		r=b1%10;
		decimal += r * pow(2,i);
		b1/=10;
		i++;
	}
//	printf("The value decimal is %d\n",decimal);
	i=0;
	gotoxy(3,6);
	printf("The Octal Value is : ");
	while(decimal!=0){
		
		r=decimal%8;
		octal[i]=r;
		decimal/=8;
		i++;
	}
	for(k=i-1; k>=0; k--){
	printf("%d",octal[k]);	
	}
}
void dec(int d){
	 int i=0,k,c,bin[100],r; 
	 gotoxy(3,6);
	printf("The Binary Number is : ");
	i=0;
	while(d!=0){
		r=d%2;
		bin[i]=r;
		d/=2;
		i++;					
	}
	for(k=i-1; k>=0; k--){
		printf("%d",bin[k]);
	}
	
}
void de(int d){
    int octal[100],i,j,r;
	i=0;
	gotoxy(3,6);
	printf("The Octal Value is : ");
	while(d!=0){
		r=d%8;
		octal[i]=r;
		d/=8;
		i++;
	}
	for(j=i-1; j>=0; j--){
		printf("%d",octal[j]);
	}
} 
void deci(int oc){
	int i,k,r; long long bin[100];  int decimal;
	while(oc!=0){
		
		r=oc%10;
		decimal += r * pow(8,i);
		oc/=10;
		i++;
	}
	i=0;
	gotoxy(3,6);
	printf("The Binary Number is : ");
	while(decimal!=0){
		
		r=decimal%2;
		bin[i]=r;
		decimal/=2;
		i++;	
	}
	for(k=i-1; k>=0; k--){
		printf("%lld",bin[k]);
	}
	
}
void decim(int oc){
	int i,r; int decimal=0;
	i=0;

//	printf("The Decimal Value Is : ");
	while(oc!=0){
		decimal += (oc%10) * pow(8,i);
		oc/=10;
		i++;
	}
	gotoxy(3,6);
	printf("The Decimal Number is : %d",decimal);
}

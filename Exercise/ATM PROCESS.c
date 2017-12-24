#include<stdio.h>
#include<conio.h>
#include<string.h>
 int main(int argc, char const *argv[]){
	char st,ch,po,ok,x[25],y[25],Ne[25],c,p,z[25],na[25]; int i,j,n,b,r,w,v;
	char name[100][25],id[100][25],sex[100][25],q[100],phone[100][25],code[25];
	int amount,balance[100];
/*
	while(strcmp(code,'1997')==0){
		gotoxy(25,1);
		printf("Please Enter Security Code To Continue To Program\n");
		bbb:
		printf("\nPlease Enter Code : ");
		scanf("%s",&code);
		if(strcmp(code,'1997')==0){

			printf("Confirm! Press any key to continue");
						}
		else {
			printf("Invalid Code");
			goto bbb;
		}
		getch();
	}
	*/



		aa:
		clrscr();
		gotoxy(34,1);
		printf("Welcome To ATM Program, Please Enter The Information");
		gotoxy(1,4);
		printf("Please enter security to continue : "); scanf("%s",code);
		if(strcmp(code,"1997")==0){
			gotoxy(50,10);
			printf("Confirm !");
			getch();
		}
		else{
			printf("Invalid Code! Please try again");
			getch();
			goto aa;
		}

do{
	ll:
	kk:
	k:

	clrscr();
	gotoxy(35,1);
	printf("*****Welcome To Wing Deposite Withdraw*****\n");
	printf("1/Create a new account\n");
	printf("2/Deposite\n");
	printf("3/Withdraw\n");
	printf("4/Show information\n");
	printf("5/Delete account\n");
	printf("6/Edit name account\n");
	printf("7/Search account (By ID)\n");
	printf("8/Exit program\n");
	ch=getch();
	switch(ch){

	  case '1' :
	  			do{
				  naa:
	  			 clrscr();
	  			gotoxy(40,1);
	  			printf("*****Please Input Costumer Information*****\n");
	  			printf("Input Name Costumer : ");  scanf("%s",&na);
				for(n=0;na[n]!='\0';n++){
					if(na[n]>='0'&&na[n]<='9'){
					printf("Name Can Not Contain Number\n");
					getch();
					goto naa;
					}

				}
				strcpy(name[i],na);
	  			aaa:
	  			lll:
	  			ag:
				printf("Input ID account : "); scanf("%s",&y);
					for(n=0; n<i; n++){
					  if(strcmp(id[n],y)==0){
					  	printf("This ID is already exist\n");
					  	goto aaa;
					  	getch();
					  }

					}
				/*
					for(v=0;y[v]!='\0';v++){
						if(y[v]>='a' && y[v]<= 'z'){
							printf("ID Contain Number Only\n");
							goto ag;
							getch();
						}
						else goto aga;
					}
					*/
					strcpy(id[i],y);
				pp:
				aga:
				printf("Input Sex : "); scanf("%s",&sex[i]);
				if(strcmp(sex[i],"m")==0 || strcmp(sex[i],"M")==0 || strcmp(sex[i],"F")==0 || strcmp(sex[i],"f")==0)
				{
					goto p;
					getch();
				}

				else{
					printf("You have entered worng sex! M for Male and F for Female\n");
					goto pp;

				}
				p:
				qq:
				q:
				printf("Input Phone : "); scanf("%s",&z);
				for(n=0;z[n]!='\0';n++){
					if(z[n]>='a' && z[n]<='z'){
						printf("Phone Number Can not Contain alphabet\n");
						goto qq;
						getch();
					}
				}
				w=n;
				if(w>10||w!=9){
					printf("Phone Number Invalid\n");
					goto q;
					getch();
				}
				strcpy(phone[i],z);
			//	printf("Input Balance : "); scanf("%d",&balance[i]);
				i++;
				printf("\nAccount has been created\n");
				printf("\nPress Enter to add more");
				st=getch();
			   }while(st==13);
	  			break;
	  case '2' :
	  			clrscr();
	  			b=0;
	  			gotoxy(35,1);
	  			printf("*****Welcome To Deposite Information*****\n");
	  			gotoxy(40,2);
				printf("The Maximun Amount Is 1000$\n");
				zz:
	  			printf("Input ID costumer to deposite : "); scanf("%s",&x);
	  			for(n=0; n<i; n++){
	  					if(strcmp(id[n],x)==0){ b=1;
	  					  xxx:
	  					  zzz:
	  					  printf("Input amount to deposite : \n"); scanf("%5d",&amount);
	  					  printf("1/Confrim\n");
	  					  printf("2/Back To Menu\n");
	  					  p=getch();
	  					  switch(p){
	  					  	case '1' :
	  					  	if(amount>1000){
	  					  	printf("The Maximun is 1000$\n");
	  					  	goto zzz;
							}
						  else if(amount<=0){
						  	printf("Must be positive number\n");
						  	goto xxx;
						  }
						  else{
						  	printf("Transaction Successfully\n");
						  	balance[n]+=amount;
						  	printf("You have just deposited %d and your current balance is %d",amount,balance[n]);
						  	getch();
						  }
							break;
	  					  	case '2' :
									goto k;
									getch();
									 break;
							}


						       }
				              }
				  if(b==0){
				  	printf("Not found! Enter To Try Again Or Other Exit\n");
				  	c=getch();
				  	if(c==13){
				  		goto zz;
					  }


				  }
				  else if(b==1){
				  	printf("The transaction is successfully\n");
				  }


	  			break;
	  case '3' :
	  			clrscr();
	  			gotoxy(40,1);
	  			printf("*****Input ID Customer To Withdraw*****\n");
	  			b=0;
	  			printf("Input ID costumer to withdraw : "); scanf("%s",&x);
	  			  for(n=0; n<i; n++){
	  			  	if(strcmp(id[n],x)==0){ b=1;
	  			  		printf("The maximun amount only 200$\n");
	  			  		eee:

	  			  		printf("Input Amount To Withdraw : "); scanf("%d",&amount);
	  			  		if(amount>balance[n]){
	  			  			printf("Balance is insufficient\n");
	  			  			printf("Your current balance is %d$\n",balance[n]);
	  			  		//	goto ccc;
							}
						else if(amount>200){
							printf("The Maximum amount only 200$\n");
							goto eee;

						}
						else{
							balance[n]-=amount;
							printf("Your withdraw is %d$ and your current balance is %d$\n",amount,balance[n]);
							printf("The Transaction Successfully\n");

						    }
						}

					}
					if(b==0){
						printf("This account is not found\n");
					}
					getch();
	  			break;
	  case '4' :
	  			clrscr();
	  			gotoxy(40,1);
	  			printf("*****-Customers Information-*****\n");
	  			for(n=0; n<i; n++){
	  				for(j=n+1; j<i; j++){
	  					if(strcmp(name[n],name[j])>0){
	  					strcpy(q,name[n]);
						strcpy(name[n],name[j]);
						strcpy(name[j],q);
						strcpy(q,id[n]);
						strcpy(id[n],id[j]);
						strcpy(id[j],q);
						strcpy(q,sex[n]);
						strcpy(sex[n],sex[j]);
						strcpy(sex[j],q);
						r=balance[n]; balance[n]=balance[j]; balance[j]=r;
						strcpy(q,phone[n]); strcpy(phone[n],phone[j]); strcpy(phone[j],q);
					    }

					  }}
					  balance[n]=0;

				printf("%20s%20s%20s%20s%20s\n","Name","ID","Sex","Phone","Balance");
				for(n=0; n<i; n++)
				printf("\n%20s%20s%20s%20s%20d$\n",name[n],id[n],sex[n],phone[n],balance[n]);
				getch();
	  			break;
	  case '5' :
	  			clrscr();
	  			gotoxy(40,1);
	  			printf("*****Input User ID To Delete*****\n");
	  			b=0;
	  			printf("Input ID to delete : "); scanf("%s",&x);
	  			printf("1/Confirm\n");
	  			printf("2/Cancel\n");
				ok=getch();
				switch(ok){
					case '1' :
					for(n=0; n<i; n++){
	  			  if(strcmp(id[n],x)==0){ b=1;
	  				 for(j=n; j<i; j++){

	  						strcpy(id[j],id[j+1]);
	  						strcpy(name[j],name[j+1]);
	  						strcpy(phone[j],phone[j+1]);
	  						strcpy(sex[j],sex[j+1]);
	  						balance[j]=balance[j+1];
						  }

					  }
				  }
				  if(b==0){
				  	printf("This ID not exists");
				  }
				  else{
				  	printf("Delete Successfully");
				  	i--;
				  }
				  getch();

								break;
					case '2' :
								goto ll;
								break;
					default  : printf("wrong select\n");
								getch();
				}
	  			break;
	  case '6' :
	  			clrscr();
	  			gotoxy(40,1);
	  			printf("*****Please Input ID To Edit Name*****\n");
	  			b=0;
	  			printf("Enter ID to edit name : "); scanf("%s",&x);
	  			for(n=0; n<i; n++){
	  				if(strcmp(id[n],x)==0){ b=1;
	  					printf("The Old name is : %s\n",name[n]);
	  					printf("Enter new name : "); scanf("%s",&Ne);
	  					printf("1/Confirm\n");
	  					printf("2/Back To Menu\n");
	  					po=getch();
	  					switch(po){
	  						case '1' :
	  									strcpy(name[n],Ne);
							  			break;
	  						case '2' :
							  			goto kk;
										break;
						  }

					  }

				  }
				  if(b==0){
				  	printf("This ID not exist");
				  }
				  else{
				  	printf("The name has just been changed");
				  }
				getch();
	  			break;
	  case '7' :
	  			clrscr();
	  			gotoxy(40,1);
	  			printf("*****Please Input ID To Search Individual*****\n");
	  			b=0;
	  			printf("Enter ID costumer to search : "); scanf("%s",&x);
	  			for(n=0; n<i; n++){
	  				if(strcmp(id[n],x)==0){ b=1;
	  				printf("%20s%20s%20s%20s%20s\n","Name","ID","Sex","Phone","Balance");
	  				printf("%20s%20s%20s%20s%20d$\n",name[n],id[n],sex[n],phone[n],balance[n]);
					  }

				  }
				if(b==0){
					printf("This ID not exist");
				}
				else{
					printf("Here you are");
				}
				getch();
	  			break;
	  case '8' : break;
	  default  :
	  		printf("\nPress again dude!");
	  		getch();

	}


}while(ch!='8');
}

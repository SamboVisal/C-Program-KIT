#include<stdio.h>
#include<conio1.h>
#include<string.h>
struct person{
	char fir[100],las[100],id[100],course[100];
	char age[100];
//	int score;
}p[100];

 char ch,st,op,po,ko,to; int i,n,j,k,w=0,f; 
main(){
char q[100],r[100],s[100],t[100],u[100],d[100],ID[100],nfir[100],nlas[100];  
int cp[100]={0},be[100]={0},cm[100]={0},eng[100]={0},cri[100]={0},oral[100]={0},m,m1,m2,m3,m4,m5;/* cp=be=cm=eng=cri=oral=0;*/ 
int sum[100]={0},l,sc,sc1,sc2,sc3,sc4,sc5;
do{
	clrscr();
//	_setcursortype(_NOCURSOR);
	gotoxy(35,1);
	printf("*****Welcome Kirirom Institute Of Technology*****\n");
	gotoxy(3,3);
	printf("1/ Input Student Information\n");
	gotoxy(3,5);
	printf("2/ Show Student Information\n");
	gotoxy(3,7);
	printf("3/ Delete Student Information\n");
	gotoxy(3,9);
	printf("4/ Input Score For Each Subject\n");
	gotoxy(3,11);
	printf("5/ Show High Score Student\n");
	gotoxy(3,13);
	printf("6/ Seach Information Student (By ID)\n");
	gotoxy(3,15);
	printf("7/ Show Information Student The Pass To Next Year Or Fail\n");
	gotoxy(3,17);
	printf("8/ Edit Information Student \n");
	ch=getch();
	switch(ch){
		case '1' :  
					do{
					clrscr();
					gotoxy(35,1);
					printf("*****Please Complete The Enrollment Information*****\n");
					gotoxy(1,3);
					printf("Input Student First Name : ");   scanf("%s",&p[i].fir);
					gotoxy(1,5);
					printf("Input Student Last Name  : ");   scanf("%s",&p[i].las);    //gets(p[i].las);
					mmm: 
					gotoxy(1,7);
					printf("Input Student ID : ");           scanf("%s",&ID);    //gets(p[i].id);
					for(n=0;n<i;n++){
						if(strcmp(p[n].id,ID)==0){
							printf("This ID is already exist\n");
							goto mmm;
							getch();
						}
					}
					strcpy(p[i].id,ID);
					gotoxy(1,9);
					printf("Input Student Age  : ");         scanf("%s",&p[i].age);        //gets(p[i].age);
					gotoxy(1,11);
					printf("Input Student Course : ");       scanf("%s",&p[i].course);     //gets(p[i].course);
					i++;
					gotoxy(20,15);
					printf("Press Enter To Continue Or ESC for Exit\n");
					gotoxy(2,17);
					printf("Here The Student's Information\n");
					
					//gotoxy(2,19);
					
					printf("%20s%20s%20s%20s%20s\n","ID","FistName","LastName","Age","Course");
					for(n=0;n<i;n++){
						
						printf("%20s%20s%20s%20s%20s\n",p[n].id,p[n].fir,p[n].las,p[n].age,strupr(p[n].course));
					}
					st=getch();
				   }while(st==13);
					break;
		case '2' :  
					clrscr();
					gotoxy(40,1);
					printf("*****Information For All Students*****\n");
					for(n=0;n<i;n++){
						for(j=n+1;j<i;j++){
							if(strcmp(p[n].id,p[j].id)>0){
								strcpy(q,p[n].fir); strcpy(p[n].fir,p[j].fir); strcpy(p[j].fir,q);
								strcpy(r,p[n].las); strcpy(p[n].las,p[j].las); strcpy(p[j].las,r);
								strcpy(s,p[n].id); strcpy(p[n].id,p[j].id); strcpy(p[j].id,s);
								strcpy(t,p[n].age); strcpy(p[n].age,p[j].age); strcpy(p[j].age,t);
								strcpy(u,p[n].course); strcpy(p[n].course,p[j].course); strcpy(p[j].course,u);
							}
						}
						sum[n]+=0;
					}
					//sum[n]=0;
					printf("%20s%20s%20s%20s%20s\n","ID","FistName","LastName","Age","Course");
					for(n=0;n<i;n++){
						printf("%20s%20s%20s%20s%20s\n",p[n].id,p[n].fir,p[n].las,p[n].age,p[n].course);
					}
					getch();
					 break;
		case '3' : clrscr();
					gotoxy(40,1);
					k=0;
					printf("*****Please Input ID Student To Delete\n");
					printf("Enter ID Student To Delete : ");   scanf("%s",&d);
					for(n=0;n<i;n++){
						if(strcmp(p[n].id,d)==0){ k=1;
							for(j=n;j<i;j++){
						    strcpy(p[j].id,p[j+1].id);
							strcpy(p[j].age,p[j+1].age);
							strcpy(p[j].fir,p[j+1].fir);
							strcpy(p[j].las,p[j+1].las);
							strcpy(p[j].course,p[j+1].course);	
							}
						}
					}
					if(k==0) printf("There Is No Id Exists!\n");
					else{
						printf("Delete Successfully\n");
						i--;	
					}  
					getch();
					break;
		case '4' :  
			        do{
					clrscr();
					gotoxy(40,1);
					printf("*****Select Options*****\n");
					printf("1/ Refill For All Subjects\n");
					printf("2/ Add Bounus\n");
					printf("3/ Back To Menu\n");
					po=getch();
					switch(po){
						case '1' : clrscr();
					               gotoxy(35,1);
					               printf("*****Input Students's Score For Each Subjects*****\n");
					               k=0;
					               gotoxy(1,3);
					               printf("Input Student ID : ");   scanf("%s",&d);
					               for(n=0;n<i;n++){
						           if(strcmp(p[n].id,d)==0){ k=1;
                                   gotoxy(1,5);
					               printf("Input C-Program Score : ");            scanf("%d",&cp[n]);    //gets(p[i].las);
					               gotoxy(1,7);
					               printf("Input Basic Electronic Score : ");     scanf("%d",&be[n]);    //gets(p[i].id);
					               gotoxy(1,9);
					               printf("Input Computer Network Score  : ");    scanf("%d",&cm[n]);        //gets(p[i].age);
					               gotoxy(1,11);
					               printf("Input English Grammar Score : ");      scanf("%d",&eng[n]);
					               gotoxy(1,13);
					               printf("Input Critical Thinking Score : ");    scanf("%d",&cri[n]);
					               gotoxy(1,15);
					               printf("Input Speech And Oral Score : ");      scanf("%d",&oral[n]);
					               sum[n] = cp[n]+be[n]+cm[n]+eng[n]+cri[n]+oral[n];
					              //p[n].id = sum;								
						                                }
					                               }
					                if(k==0) {
									printf("Sorry! Student's ID not found\n");
											}	
											getch();			
						
						
									break;
						case '2' :  clrscr();
									gotoxy(40,1);
									k=0;
									printf("*****Choose Any Subject To Add Bonus*****\n");
									printf("Input Student ID : ");  scanf("%s",&d);
									for(n=0;n<i;n++){
										if(strcmp(p[n].id,d)==0){ k=1;
											do{
											printf("1/ C-program\n");
											printf("2/ Basic Electronic\n");
											printf("3/ Computer Network\n");
											printf("4/ English \n");
											printf("5/ Critical Thinking\n");
											printf("6/ Speech & Oral\n");
											ko=getch();
											switch(ko){
												case '1' : //clrscr();
															xx:
															printf("Input Bonus : "); scanf("%d",&sc);
															if(sc>10){
																printf("Maximum Is 125p \n");
																goto xx;
																getch();
															}
															else{
																m=sc+cp[n];
																cp[n]=m;
																sum[n]+=sc;
															}
															getch();
															break;
												case '2' : clrscr();
															xxx:
															printf("Input Bonus : ");  scanf("%d",&sc1);
															if(sc1>10){
																printf("Maximum is 75p \n");
																goto xxx;
																getch();
															}
															else {
																m1=sc1+be[n];
																be[n]=m1;
																sum[n]+=sc1;
															}
															break;
												case '3' : 
															ccc:
															clrscr();
															printf("Input Bonus : "); scanf("%d",&sc2);
															if(sc2>10){
																printf("Maximum is 10p \n");
																goto ccc;
																getch();
															}
															else{
																m2=sc2+cm[n];
																cm[n]=m2;
																sum[n]+=sc2;
															}
															break;
												case '4' : clrscr();
															cc:
															printf("Input Bonus : "); scanf("%d",&sc3);
															if(sc3>10){
																printf("Maximum is 10 \n");
																goto cc;
																getch();
															}
															else{
																m5=sc3+eng[n];
																eng[n]=m5;
																sum[n]+m5;
															}
															break;
												case '5' : clrscr();
															cccc:
															printf("Input Bonus : "); scanf("%d",&sc4);
															if(sc4>10){
																printf("Maximum is 10p\n");
																goto cccc;
																getch();
															}
															else{
																m3=cri[n]+sc4;
																cri[n]=m3;
																s[n]+=sc4;
															}
															break;
												case '6' : clrscr();
															gotoxy(35,1);
															printf("*****Input The Number Of Bonus*****\n");	
															dd:
															printf("Input Bonus : "); scanf("%d",&sc5);
															if(sc5>10){
																printf("Maximum is 10\n");
																goto dd;
																getch();
															}
															else{
																m4=oral[n]+sc5;
																oral[n]=m4;
																s[n]+=sc5;
															}
															break;
												case '7' : break;
												default : printf("Wrong Input!\n");
												getch();
											}
										     }while(ko!='7');
										}
									}
									if(k==0){
										printf("This Student ID is not found\n");
										
									}
									getch();
									break;
						case '3' : break;
						default : printf("Wrong Input!\n");
						getch();
					}
				      }while(po!='3');
					
					break;
		case '5' : clrscr();
					gotoxy(40,1);
					printf("*****Select Options*****\n");
					printf("1/ Show All Students Score\n");
					printf("2/ Show By ID's Student\n");
					printf("3/ Back To Menu\n");
					op=getch();
					switch(op){
						case '1' :  clrscr();
									
									gotoxy(40,1);
									printf("*****Score Information For All Students*****\n");
									for(n=0;n<i;n++){
									for(j=n+1;j<i;j++){
									if(strcmp(p[n].id,p[j].id)>0){
									strcpy(q,p[n].fir); strcpy(p[n].fir,p[j].fir); strcpy(p[j].fir,q);
									strcpy(r,p[n].las); strcpy(p[n].las,p[j].las); strcpy(p[j].las,r);
									strcpy(s,p[n].id); strcpy(p[n].id,p[j].id); strcpy(p[j].id,s);
									strcpy(t,p[n].age); strcpy(p[n].age,p[j].age); strcpy(p[j].age,t);
									l=sum[n]; sum[n]=sum[j]; sum[j]=l;
											}
										}
									
									}
								    //sum[n]+=0;
								    gotoxy(0,5);
									printf("%20s%20s%20s%20s%20s\n","ID","FistName","LastName","Age","Score");
									for(n=0;n<i;n++){
									printf("%20s%20s%20s%20s%20d\n",p[n].id,p[n].fir,p[n].las,p[n].age,sum[n]);
									}
									getch();										
									break;
						case '2' :  clrscr();
									k=0;
									gotoxy(40,1);
									printf("*****Input Student Id That You Wish To See****\n");
									gotoxy(2,4);
									printf("Input ID Student That You Wish To See : ");  scanf("%s",&d);
									for(n=0;n<i;n++){
										if(strcmp(p[n].id,d)==0){ k=1;
										sum[n]+=0;
										printf("%10s%15s%15s%15s%15s%15s%15s%13s\n","Student's Name","Cprogram","Electronic","Network","Grammar","CThinking","Speech&Oral","Total");	
										printf("%10s%15d%15d%15d%15d%15d%15d%13dp\n",p[n].fir,cp[n],be[n],cm[n],eng[n],cri[n],oral[n],sum[n]);	
											}
										}
									getch();	
									break;
									
						case '3' : 
						
						            break;
						default : printf("Wrong Input!\n");
									getch();									
									}

					
					break;
		case '6' :  clrscr();
					gotoxy(40,1);
					printf("*****Input Student ID To Display Information*****\n");
					gotoxy(2,3); k=0;
					kkkk:
					printf("Input ID Student : "); scanf("%s",&d);
					for(n=0;n<i;n++){ k=1;
						if(strcmp(d,p[n].id)==0){
						printf("%20s%20s%20s%20s%20s\n",p[n].id,p[n].fir,p[n].las,p[n].age,p[n].course);							
						}
					}
					if(k==0) {
						printf("This Student ID is not found! Try again\n");
						ch=getch();
						if(ch==13) goto kkkk;
					}
					getch();
					 break;
		case '7' :  
					do{
					clrscr();
					gotoxy(40,1);
					printf("*****Select Options To Continue*****\n");
					printf("1/ Show For All Candidates\n");
					printf("2/ Search By ID \n");
					printf("3/ Student Pass or Re-exam\n");
					printf("4/ Exit \n");
					ch=getch();
					switch(ch){
						
						case '1' : clrscr();
									gotoxy(40,1);
									printf("*****P For Pass and F for Fail*****\n");
								for(n=0;n<i;n++){
									for(j=n+1;j<i;j++){
								if(strcmp(p[n].id,p[j].id)>0){
								//strcpy(q,p[n].fir); strcpy(p[n].fir,p[j].fir); strcpy(p[j].fir,q);
								//strcpy(r,p[n].las); strcpy(p[n].las,p[j].las); strcpy(p[j].las,r);
								strcpy(s,p[n].id); strcpy(p[n].id,p[j].id); strcpy(p[j].id,s);
								//strcpy(t,p[n].age); strcpy(p[n].age,p[j].age); strcpy(p[j].age,t);
								//strcpy(u,p[n].course); strcpy(p[n].course,p[j].course); strcpy(p[j].course,u);
															}
														}
												sum[n]+=0;
					           				}	
										printf("%20s%20s%20s\n","ID's Student","Total Score","P Or F");	   									
									for(n=0;n<i;n++){
										if(sum[n]>100)
										printf("%20s%20d%20s\n",p[n].id,sum[n],"P");
										else if(sum[n]>=50)
										printf("%20s%20d%20s\n",p[n].id,sum[n],"P");
										else
										printf("%20s%20d%20s\n",p[n].id,sum[n],"F");	
										
									}
									getch();
									break;
						case '2' : 
									do{
									
									clrscr();
									k=0;
									gotoxy(40,1);
									printf("*****Input ID Student To Show*****\n");
									printf("Enter ID student : ");  scanf("%s",&d);
									for(n=0;n<i;n++){
										if(strcmp(d,p[n].id)==0){ k=1;
										printf("%40s%20s%20s\n","ID's Student","Total Score","P Or F");										
										if(sum[n]>100)
										printf("%40s%40d%40s\n",p[n].id,sum[n],"P");
										else if(sum[n]>=50)
										printf("%40s%20d%20s\n",p[n].id,sum[n],"P");
										else
										printf("%40s%20d%20s\n",p[n].id,sum[n],"F");										
										   }												
									}
									if(k==0){
										printf("This student ID is not found\n");
										getch();
									}
									ch=getch();
								}while(ch==13);
									 break;
						case '3' :  clrscr();
									gotoxy(40,1);
									printf("*****Candidates Who Should Pass Or Re-Exam*****\n");
									printf("The Students That Fail Are \n");
									printf("%10s%15s\n","FirtName","Average");
									for(n=0;n<i;n++){
										if(sum[n]<50){
										w=n;
										f=n;		
									//	printf("%d",w);
										printf("%10s%15s\n",p[n].fir,"Fail");
										}
							         }
							         printf("%d",w);
									getch();
									break;
						
						
						case '4' : break;
						default : printf("Try Again!\n");
									getch();
						
					}
				}while(ch!='4');
					getch();
					break;
		case '8' :	clrscr();
					gotoxy(40,1);
					k=0;
					printf("*****Input ID Student To Edit Name*****\n");
					printf("Enter ID student : ");  scanf("%s",&d);
					for(n=0;n<i;n++){
						if(strcmp(d,p[n].id)==0){
							k=1;
							printf("The Current First Name Is %s\n",p[n].fir);
							printf("The Current Last Name Is %s\n",p[n].las);
							printf("Input New Student First Name : ");  scanf("%s",&nfir);
							printf("Input New Student Last Name : ");    scanf("%s",&nlas);
							printf("1/ Confirm\n");
							printf("2/ Cancel\n");
							to=getch();
							switch(to){
								case '1' : 
											strcpy(p[n].fir,nfir); strcpy(p[n].las,nlas);	
											printf("Successful\n");
											
											break;
								case '2' : 
											printf("See you later!\n");
											getch();
											break;
								default  : printf("Wrong Input Sir!\n");
								getch();
							}
						}
					}
					if(k==0){
						printf("This Student ID not found! Bye\n");
						getch();
					}
					getch();
					 break;
		case '9' : break;
		default : printf("wrong input friend!\n");
					getch();
	}

  }while(ch!='9');
}

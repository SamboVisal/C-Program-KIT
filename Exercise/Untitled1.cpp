clrscr();
					gotoxy(35,1);
					printf("*****Input Students's Score For Each Subjects*****\n");
					k=0;
					gotoxy(1,3);
					printf("Input Student ID : ");   scanf("%s",&d);
					for(n=0;n<i;n++){
						if(strcmp(p[n].id,d)==0){ k=1;
                    gotoxy(1,5);
					printf("Input C-Program Score : ");            scanf("%d",&cp);    //gets(p[i].las);
					gotoxy(1,7);
					printf("Input Basic Electronic Score : ");     scanf("%d",&be);    //gets(p[i].id);
					gotoxy(1,9);
					printf("Input Computer Network Score  : ");    scanf("%d",&cm);        //gets(p[i].age);
					gotoxy(1,11);
					printf("Input English Grammar Score : ");      scanf("%d",&eng);
					gotoxy(1,13);
					printf("Input Critical Thinking Score : ");    scanf("%d",&cri);
					gotoxy(1,15);
					printf("Input Speech And Oral Score : ");      scanf("%d",&oral);
					sum[n] = cp+be+cm+eng+cri+oral;
					//p[n].id = sum;								
						}
					}
					if(k==0) {
						printf("Sorry! Student's ID not found\n");
					}	
					getch();			

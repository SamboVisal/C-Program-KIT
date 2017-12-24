#include<stdio.h>
#include<conio.h>

main(){
	int eng,kh,cp,sum=0;
	printf("Input English Score : "); scanf("%d",&eng);
	printf("Input Khmer Score : ");   scanf("%d",&kh);
	printf("Input C-program score : "); scanf("%d",&cp);
	sum=eng+kh+cp;
	if(sum>90){
		printf("A");	
			}
	else if(sum>80 && sum<=90){
		printf("B");
		}
	else if(sum>70 && sum<=80){
		printf("C");
	    }
	else if(sum>60 && sum <=70){
		printf("D");
	}		
	else if(sum>=50 && sum<=60){
		printf("E");
	}
	else {
		printf("F=Fail,Try again next year");
	}
		return 0;		   					              
}

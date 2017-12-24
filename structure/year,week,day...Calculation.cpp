#include<stdio.h>
struct name{
	
	int year,week,day;
	int hour,min;
	
	
}d1,d2,sum;

main(){
	
	printf("Enter the first\n");
	printf("Input Year : "); scanf("%d",&d1.year);
	printf("Input Week : "); scanf("%d",&d1.week);
	printf("Input days : "); scanf("%d",&d1.day);
	printf("Input Hour : "); scanf("%d",&d1.hour);
	printf("Input Minutes : "); scanf("%d",&d1.min);
	printf("Enter a second\n");
	printf("Input Year : "); scanf("%d",&d2.year);
	printf("Input Week : "); scanf("%d",&d2.week);
	printf("Input days : "); scanf("%d",&d2.day);
	printf("Input Hour : "); scanf("%d",&d2.hour);
	printf("Input Minutes : "); scanf("%d",&d2.min);
	sum.year=d1.year+d2.year;
	sum.week=d1.week+d2.week;
	sum.day=d1.day+d2.day;
	sum.hour=d1.hour+d2.hour;
	sum.min=d1.min+d2.min;	
	if(sum.min>=60){
		++sum.hour;
		sum.min=sum.min-60;
	}
	if(sum.hour>=24){
		++sum.day;
		sum.hour=sum.hour-24;
	}
	if(sum.day>=7){
		++sum.week;
		sum.day=sum.day-7;
	}
	if(sum.week>=52){
		++sum.year;
		sum.week=sum.week-52;
	}
	printf("The result of %d years %d weeks %d days %d hours %d mins\n",sum.year,sum.week,sum.day,sum.hour,sum.min);
	getch();
}

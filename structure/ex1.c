#include<stdio.h>
struct distance{
	
	int feet;
	float inch;
	
}d1,d2,sum;


main(){
	
	printf("1st distance\n");
	printf("Enter feet : ");
	scanf("%d",&d1.feet);
	printf("Input Inch : ");
	scanf("%f",&d1.inch);
	printf("2nd distance\n");
	printf("Enter feet : ");
	scanf("%d",&d2.feet);
	printf("Input Inch : ");
	scanf("%f",&d2.inch);
	sum.feet=d1.feet+d2.feet;
	sum.inch=d1.inch+d2.inch;
	while(sum.inch>=12){
		++sum.feet;
		sum.inch=sum.inch-12;
		
	}
	printf("Sum of distance = %d\'-%.1f\"",sum.feet,sum.inch);
	return 0;
	
}

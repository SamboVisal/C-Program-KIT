#include<stdio.h>
#include<conio.h>

main()
/*   {
	int d,amount=0, i[100], k=0;
	printf("Input amount of digit : "); scanf("%d",&d);
	while(d!=0){
		i[k]=d%10;
		d=d/10;
		k++;
	}
	printf("amount of digit is %d",k);
} */
{
	
   	int d,amount=0;
	printf("Input amount of digit : "); scanf("%d",&d);
	while(d!=0){
		d=d/10;
		amount=amount+1;
	}
	printf("amount of digit is %d",amount);

   }

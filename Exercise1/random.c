#include<stdio.h>
#include<conio.h>


main(){
	
	int random,i;
	
	
	random= rand() %10 ;
	
	for(i=0;i<random;i++)
	printf("the random number is %d\n",random);
	
	return 0;
}

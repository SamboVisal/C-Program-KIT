#include<stdio.h>

main(){
	float f,Celsuis;
	printf("The program that covert from Faremheith to Celsuis\n");
	printf("input the value of Faremheith : "); scanf("%f",&f);
	Celsuis=(f-32)*5/9;
	printf("The value of Celsuis is %.02f",Celsuis);
	
}

#include<stdio.h>
#include<math.h>
/*This program will find second degree minal */
main(){
	
	float a,b,c,deta,real,imagine;
	float x1,x2;
	printf("Input the value of A : "); scanf("%f",&a);
	printf("Input the value of B : "); scanf("%f",&b);
	printf("Input the value of C : "); scanf("%f",&c);
	deta = pow(b,2)-(4*a*c);
	printf("The value of deta is %.2f\n",deta);
	if(deta<0){
		real= -b/(2*a); imagine= (sqrt(-deta))/(2*a);
		printf("First root: %.2f+%.2fi\n",real,imagine);
		printf("Second root: %.2f-%.2fi\n",real,imagine);
	}
	else if(deta>0) {
		x1: (-b+sqrt(deta))/2*a;
		x2: -b-(sqrt(deta))/2*a; 
		printf("First root is %.2f\n",x1);
		printf("Second root is %.2f\n",x2);
	}
	else if(deta==0){
		x1=x2=(-b)/(2*a);
		printf("The value is of X1 and X2 are %.2f",x1,x2);
	}
	
}

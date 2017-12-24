//program to find the root of the second degreeminal
#include<stdio.h>
#include<math.h>
main()
{
	float a,b,c,d,r1,r2,rp,ip;
	printf("Enter the number:\n");scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>0)
	{
		r1=(-b+sqrt(d))/(2*a);
		r2=(-b-sqrt(d))/(2*a);
		printf("The root is: %.2f and %.2f",r1,r2);
	}
	else if(d==0)
	{
		r1=r2=-b/(2*a);
		printf("The root is: %.2f and %.2f",r1,r2);
	}
	else if(d<0)
	{
		rp=-b/(2*a);
		ip=sqrt(-d)/(2*a);
		printf("The first root is: %.2f + %.2f",rp,ip);
		printf("The second root is: %.2f - %.2f",rp,ip);
	}
}

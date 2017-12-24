#include<stdio.h>
#include<math.h>
main(){
	int oc;
	printf("enter octal number : "); scanf("%d",&oc);
	de(oc);
}
int de(int oc){
	int i,d=0,r; 
	i=0;
	while(oc!=0){
		
		r=oc%10;
		d+=r*pow(8,i);
		oc/=10;
		i++;
	}
	printf("the decimal number %d ",d); 
}

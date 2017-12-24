//program to display the fibonacci series withing a range

#include<stdio.h>
int main(){
    int k,r;
    long int a=0,b=1,f;

 
    printf("Enter the number :");
    scanf("%d",&r);

    printf("FIBONACCI SERIES: ");
    printf("%ld %ld",a,b);

    for(k=2;k<r;k++){
    	 f=a+b;
         a=b;
         b=f;
         printf(" %ld",f);
    }
  

}

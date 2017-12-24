/*
#include<stdio.h>
#include<math.h>

main(){
	double l,a,result;
	printf("Input number that you want to LOG : "); scanf("%lf",&l);
	a=l;
	result=log(l);
	
	printf("The Log(%lf) is %lf",a,result);	
}  */
#include<stdio.h>
#include<math.h>
 
int main() {
    int num, digitCount;
     
    printf("Enter a positive integer\n");
    scanf("%d", &num);
     
    if(num < 0) num = num *-1;
    if(num){
       /* number of digit = log10(n) + 1 */
       digitCount = (int)log10((double)num) + 1;
    } else {
       digitCount = 1;
    }
    printf("Digit Count = %d", digitCount);
    return 0;
}

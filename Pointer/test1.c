#include<stdio.h>
#include<stdlib.h>
main(){
	int i=0;
	char *str1 = malloc(100);	
	gets(str1);
	 while(*str1){
       printf("%c %d\n",*str1++,i++);
  }
  
  	//   printf("%c",*str1[0]);
}

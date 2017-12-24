#include<stdio.h>
#include<string.h>
main(){
		int k,i;  char str[200];
		printf("enter any string : "); gets(str);
		
		k=strlen(str);
		for(i=0;i<k;i++){
			
			printf("%c",*(str+i));
		}
		printf("\n");
		printf("Number of string %s are %d  ",str,k);
}

#include<stdio.h>
#include<conio1.h>
#include<string.h>
/*
main(){
	char s[20]; int a,i;
	printf("Input a string : "); gets(s);
	a= strlen(s) -1;
	for(i=a; i>=0; i--){
		printf("%c",s[i]);
		
	}
	getch();
}
*/
main(){
	char s[20]; int len,i;
	printf("Input a string : "); gets(s);
	len=strlen(s);
	printf("%s %d\n",s,len);
	for(i=len-1; i>=0; i--){
		printf("%c",s[i]);
	}
}

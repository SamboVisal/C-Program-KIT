#include<stdio.h>
#include<string.h>
main(){
	
 char s[20];
 char *st=s;
 scanf("%s",&s);
 printf("%s",st);
/*  Notice that str is pointer to the string, it is also name of the string. 
Therefore we do not need to use indirection operator *.*/
}

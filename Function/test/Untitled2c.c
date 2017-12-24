#include<stdio.h>
int main(){
	char s[1000];
	int i;
	scanf("%s",s);
	for(i=0;s[i]!='\0';++i);
	printf("The lenght of string are: %d",i);
	return 0;
}

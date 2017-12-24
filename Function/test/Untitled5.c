#include<stdio.h>
#include<string.h>
main(){
	char s[20]; int i,j,len=0;
	printf("Input a string : "); gets(s);
	len=strlen(s);
	for(i=0; i<=len; i++){
		for(j=i+1; j<len; j++){
			strcpy(len[i],len[j]);
		}
		printf("%s",s);
	}
	
}

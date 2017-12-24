#include<stdio.h>

main(){
	char name[100]; int vo,co,i; vo=co=0;
	printf("enter string to count vowel : "); gets(name);
	for(i=0;name[i]!='\0';i++){
		
	if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||
	name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='u'
	||name[i]=='U'		
	)
		vo++;
		else
		co++;
	}
	printf("amount of vowel is %d\n amoutn consonant is %d",vo,co);
	
}

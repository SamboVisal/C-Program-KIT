#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<conio1.h>
//low impiles that position of pointer is within a word
#define low 1
//high implies that position of pointer is out of word
#define high 0

main(){
	
	int nob,now,nod,nov,nos,pos = high;
	char *str=malloc(1000);
	nob=now=nod=nov=nos=0;
	clrscr();
	printf("Enter any string : "); 
	gets(str);
	while(*str!='\0'){
		
		if(*str==' '){
			//counting number of blank space
			pos = high;
			++nob;
		}
		else if(pos==high){
			//counting numbers of word
			pos = low;
			++now;
		}
		if(isdigit(*str)) //counting number of digit
			++nod;
		if(isalpha(*str)) //counting number of vowel
			switch(*str){
				case 'a' : 
				case 'e' :
				case 'i' :
				case 'o' :
				case 'u' :
				case 'A'  :
				case 'E'  :
				case 'I'  :
				case 'O'  :
				case 'U'  :
				++nov;
				break;	
			}
		//countiing number of special character
		if(!isdigit(*str) && !isalpha(*str))
		++nos;
		str++;		
	}
	printf("\nNumber of words %d",now);
	printf("\nNumber of spaces %d",nob);
	printf("\nNumber of vowels %d",nov);
	printf("\nNumber of digits %d",nod);
	printf("\nNumber of special character %d",nos);
	getch();
}

#include<stdio.h>

main(){
	char a[100];  int i=0,vowel,consonant,space;
	vowel=consonant=space=0;
	printf("Input Amount of string : ");  gets(a);
	for(i=0;a[i]!='\0';i++){
		
		if(a[i]=='a'|| a[i]=='A' || a[i]=='e' || a[i]=='E' ||
		   a[i]=='i'|| a[i]=='I' || a[i]=='O' || a[i]=='o' ||
		   a[i]=='u'|| a[i]=='U')
		   {
		   vowel=vowel+1;
	       }
		else{
			consonant=consonant+1;
		}
		if(a[i]==' '){
			space=space+1;
		}	
		
	}
	printf("\nVowel are %d \nConsonant are %d \nSpace are %d",vowel,consonant,space);
}

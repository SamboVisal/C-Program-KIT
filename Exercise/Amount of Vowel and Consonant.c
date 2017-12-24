#include<stdio.h>

main(){
	char a[200];
	int vowel,space,consonant,digit,i;
	vowel=consonant=digit=space=0;
	printf("Input amount of Vowel and Consonant "); gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a'|| a[i]=='A' || a[i]=='e' || a[i]=='E' ||
		   a[i]=='i'|| a[i]=='I' || a[i]=='O' || a[i]=='o' ||
		   a[i]=='u'|| a[i]=='U')
		   {
		   vowel=vowel+1;
	       }
	    else 
		   {
			consonant=consonant+1;
		   }   
		if(a[i]>='0' && a[i]<='9')
		   {
		   	digit=digit+1;
		   }   
		else if(a[i]==' '){
				space=space+1;
		  }   
	}
	
	printf("The amount of Vowel is %d\n",vowel);
	printf("The amount of Consonant is %d\n",consonant);
	printf("The amount of digit is %d\n",digit);
	printf("The amount of space is %d\n",space);
}

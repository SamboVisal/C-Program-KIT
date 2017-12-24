#include<stdio.h>
#include <stdio.h>
int main()
{
int nv, v;
char ch=' ';
  nv=v=0;
while(ch !='!')
{
puts ("Enter a character"); 
ch= getchar();
fflush (stdin); 
switch (ch)
{
case 'A' :
case 'a'  :
case 'E' :
case 'e' :
case 'I' :
case 'i' :
case 'O':
case 'o' :
case 'U':
case 'u' :   v= v + 1;	/* increment vowel count*/
		break;
default:      nv=nv+1;   /*increment non-vowel count*/
}
}
	if(nv>v)
		puts("Non-vowel-count greater than vowel-count ");
	else if(nv<v)
		puts("Vowel-count greater than non-vowel-count ");
	else
		puts("Vowel and non-vowel counts are equal");
}

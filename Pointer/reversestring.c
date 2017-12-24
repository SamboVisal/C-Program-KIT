#include <stdio.h>
#include <conio1.h>
void main()
{
	char *s,name[100];
	s=&name[0];
	int c,i;
	clrscr();
	printf("ENTER A STRING: ");
	gets(name);
	c=strlen(name);
	s=&name[c-1];
	printf("THE REVERSE OF THE STRING IS:");
	for(i=0;i<c;i++)
		printf("%c",*(s-i));
	getch();
}

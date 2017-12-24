#include<stdio.h>
char string_in(char*);
main(){
	char str[200]; int length;	
	printf("enter any string : "); gets(str);
	length=string_in(str);
	printf("The length string of given %s is %d",str,length);
}
char string_in(char *p){//*p=&str[0]

	int count = 0;
	while(*p!='\0'){
		
		count++;
		p++;
	}
	return count;
}

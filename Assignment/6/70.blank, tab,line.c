#include<stdio.h>

main(){
	char name[200]; int a=0,i,c;
	printf("input string : "); gets(name);
	for(i=0;name[i]!='\0';i++){
		if(name[i]==' ')
		c=c+1;
		if(name[i]=='\t')
		a=a+1;
	}
	printf("the tab is %d and space is %d",a,c);
}

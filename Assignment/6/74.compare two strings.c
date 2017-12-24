#include<stdio.h>

main(){
	char name1[100],name2[100]; int i,j,a,b,c;
	printf("enter first string : "); gets(name1);
	printf("enter second string : "); gets(name2);
	for(i=0;name1[i]!='\0';i++);
	a=i;
	for(j=0;name2[j]!='\0';j++);
	b=j;
	if(a==b){
		printf("amount of strings equal\n");
	}
	else printf("not equal of amount\n");
	i=0,j=0;
	while(name1[i]!='\0' && name2[i]!='\0'){
		if(name1[i]!=name2[i]){
			c=1;
		}
		i++;
	}
	if(c==0&&name1[i]=='\0'&&name2[i]=='\0'){
		printf("they are same\n");
	}
	else printf("not same");
}

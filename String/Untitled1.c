#include<stdio.h>

main(){
/*	
	char s[100]="Welcome To Cambodia";	
//	printf("Please Enter Name : ");  scanf("%s",s);
	printf("The name is %c\n",s[4]);
*/
   char name[30],ch;
	int i=0;
	printf("Enter name : ");
	while(ch!='\n'){      // terminates if user hit enter
		scanf("%c",&ch);  // %s not need &
		name[i]=ch;
		i++;
	}	
	name[i]='\0';   // install null character at end
	printf("Your name is %s",name);
}

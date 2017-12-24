#include<stdio.h>

main(){
	char n;
	printf("this program check for vowel or consonant\n");
	printf("enter character : "); scanf("%c",&n);
	if(n=='a' || n=='e' || n=='i' || n=='o' || n=='u' && n == 'A' || n == 'E' || n == 'I' || n=='O' || n =='U' ){
		printf("this character is vowel %c",n);
	}
	else {
		printf("this is consonant");
	}
}

#include<stdio.h>
#include<stdlib.h>
int main(){
  int i=0,j=0;
  char *str1=malloc(sizeof(char)),*str2=malloc(200),*str3=malloc(200);
  puts("Enter first string");
  gets(str1);
  puts("Enter second string");
  gets(str2);
  printf("Before concatenation the strings are\n");
  puts(str1);
  puts(str2);
  while(*str1){
      str3[i++]=*str1++;
  }
  while(*str2){
      str3[i++]=*str2++;
  }
  str3[i]='\0';
  printf("After concatenation the strings are\n");
  puts(str3);
  return 0;
}


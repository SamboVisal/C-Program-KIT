#include<stdio.h>

main(){
	char name[100],f[100]; 
	int c=0,i;
	printf("enter string : "); gets(name);
	printf("enter alphabet to find frequency : ");  scanf("%s",&f);
	for(i=0;name[i]!='\0';i++){
		if(name[i]==f){
			c++;
		}
	}
	printf("the frequency is %d",c);
	
}

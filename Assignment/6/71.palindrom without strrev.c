#include<stdio.h>

main(){
	char na[100]; int length,end,middle,i;
	printf("enter string : ");  scanf("%s",na);
	for(i=0;na[i]!='\0';i++);
	length = i;
	end=length-1;
	middle=length/2;
	for(i=0;i<middle;i++){
		
		if(na[i]!=na[end]){
			printf("this is not palindrom\n");
		}
		end--;
	}
	if(i==middle){
		printf("this is palindrom");
	}
}

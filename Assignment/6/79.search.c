#include<stdio.h>

main(){
	char name[20][100],se[100]; int n,i,c;
	printf("enter amount of name : "); scanf("%d",&n);
	printf("enter name : "); 
	for(i=0;i<n;i++){
		scanf("%s",name[i]);
	}
	a:
	printf("enter name to search : ");  scanf("%s",se);
	c=0;
	for(i=0;i<n;i++){
		if(strcmp(name[i],se)==0){ c=1;
			printf("The result is %s\n",name[i]);
		}
	}
	if(c==1){
		printf("search has been successful");
		getch();
	}
	else {
		printf("not found! try again\n");
		getch();
		goto a;
	}
}

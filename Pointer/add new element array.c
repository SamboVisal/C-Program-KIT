#include<stdio.h>
#include<conio1.h>


main(){
	int a,s[20],nele,ne,i;
	printf("Input Amount : "); scanf("%d",&a);
	printf("Input Number : "); 
	for(i=0;i<a;i++){
		scanf("%d",(s+i));
	}
	printf("Input Element to add : "); scanf("%d",&nele);
	printf("Input New number  : "); scanf("%d",&ne);
	for(i=a-1;i<nele-1;i--){
		
		s[i+1]=s[i];
	}
	s[nele-1]=ne;
	for(i=0;i<a;i++){
		
		printf("%d\n",s[i]);
	}

}

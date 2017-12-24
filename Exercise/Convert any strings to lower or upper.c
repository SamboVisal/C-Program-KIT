#include<stdio.h>
#include<string.h>
main(){  
		char name[100],why; 
	    int c=0;   
	    
		printf("Input String dude : "); gets(name);

	
	while(name[c]!='\0'){
		
		    why=name[c];
		    if( why >= 'A' &&  why <= 'Z')
		    name[c] = name[c] + 32;
			else if ( why >= 'a' &&  why <= 'z')
			name[c] = name[c] - 32;		
			c++;
		
	}
	
	printf("Your String is %s",name[c]);
	
}

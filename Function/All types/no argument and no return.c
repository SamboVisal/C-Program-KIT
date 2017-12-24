#include <stdio.h>
//void prime();
main(){
	
	prime();  // No argument if passed to prime()

	
}
void prime()
{
    int n, i, c = 0;

    printf("Enter a positive integer: ");
    scanf("%d",&n);

    for(i=2; i<=n/2; ++i)
    {
        // condition for nonprime number
        if(n%i==0)
        {
            c=1;
            break;
        }
    }

    if (c==0)
        printf("%d is a prime number.",n);
    else
        printf("%d is not a prime number.",n);
    
}

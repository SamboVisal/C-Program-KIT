#include<stdio.h>
#include<conio.h>

/* int magic, guess;

printf( "\nPlease input Guess value: " );
scanf( "%d", &guess );
magic = rand( );
if ( guess == magic )
printf( "\n You are right." );
if ( guess < magic )
printf( "\n You are too low." );
if ( guess > magic )
printf( "\n You are too high." );
printf( "\n %d is the magic value", magic );
getch( );  */
/*
int main()
{
     int marks[10], i, n, sum = 0, average;
     printf("Enter n: ");
     scanf("%d", &n);
     for(i=0; i<n; ++i)
     {
          printf("Enter number: ");
          scanf("%d", &marks[i]);
          sum += marks[i];
     }
     average = sum/n;

     printf("Average marks = %d", average);

     return 0;
}       */

int main()
{
    int i, n;
    float arr[100];

    printf("Enter total number of elements(1 to 100): ");
    scanf("%d", &n);
    printf("\n");

    // Stores number entered by the user
    for(i = 0; i < n; ++i)
    {
       printf("Enter Number %d: ", i+1);
       scanf("%f", &arr[i]);
    }

    // Loop to store largest number to arr[0]
    for(i = 1; i < n; ++i)
    {
       // Change < to > if you want to find the smallest element
       if(arr[0] < arr[i])
           arr[0] = arr[i];
    }
    printf("Largest element = %.2f", arr[0]);

    return 0;
}

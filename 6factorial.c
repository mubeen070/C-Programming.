#include <stdio.h>
int main( void )
{
    int i; // outer counter
    int j; // inner counter
    int factorial;
    printf( "X\tFactorial of X\n" ); 

    for ( i = 1; i <= 5; ++i ) 
    {
        factorial = 1;

        for ( j = 1; j <= i; ++j ) 
        {

            factorial *= j; //or factorial= factorial*j;

        } 
     printf( "%d\t%d\n", i, factorial );

    }

} 
//The factorial of 20 is difficult to find because the data type "int" is unable to store the value of it.
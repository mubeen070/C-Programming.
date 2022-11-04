#include <stdio.h>
int fact(int);
int main( void )
{
    int  max;
    printf( "X\tFactorial of X\n" );
    printf("Enter number: \n");
    scanf("%d", &max); 
    for (int i = 0; i <=max; i++)
    {
         printf( "%d\t%d\n", i, fact(i) );
    }
}
int fact(int x){
    int fact=1;
    for(int i=1; i<=x; i++){
        fact= fact*i;
    }
    return fact;
} 
//The factorial of 20 is difficult to find because the data type "int" is unable to store the value of it.
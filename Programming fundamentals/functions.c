#include <stdio.h>

double square(double num)
{
    return (num * num);
}

int main()
{
    printf(" \n \n Funtion : Find square of any number: \n");
    printf("------------------------------------------- \n");

    int num;
    double n;
    printf("Enter the number to square: ");
    scanf("%d", &num);
    n = square(num);
    printf("The square of %d is : %.1f", num, n);
    return 0;
}


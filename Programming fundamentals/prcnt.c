#include <stdio.h>

int main(void)
{

    float x, y, prcnt;

    printf("Enter obtained marks in fsc= \t");
    scanf("%f", &x);

    printf("Enter total marks of fsc = \t");
    scanf("%f", &y);

    prcnt = (x / y) * 100;
    printf("%s%1.f\n"
           "%s%1.f\n"
           "%s%1.f\n",
           "Obatined marks: \t", x,
           "Total marks: \t", y,
           "Your percentage is: \t", prcnt);

    return 0;
}
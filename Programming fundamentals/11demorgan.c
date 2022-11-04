#include <stdio.h>
int main(void)
{
    int x = 10;
    int y = 1;
    int a = 3;
    int b = 3;
    int g = 5;
    int Y = 1;
    int i = 2;
    int j = 9;
    printf("current variable values are: \n");
    printf("x = %d, y = %d, a = %d,", x, y, a);
    printf(" b = %d\n", b);
    printf("g = %d, Y = %d, i = %d,", g, Y, i);
    printf(" j = %d\n\n", j);
    if ((!(x < 5) && !(y >= 7)) == (!((x < 5) || (y >= 7))))
    {
        printf("!( x < 5 ) && !( y >= 7 ) is equivalent to !( ( x < 5 ) || ( y >= 7 ) )\n");
    }
    else
    {
        printf("!( x < 5 ) && !( y >= 7 ) is not equivalent to !( ( x < 5 ) || ( y >= 7 ) )\n");
    }
    if ((!(a == b) || !(g != 5)) == (!((a == b) && (g != 5))))
    {
        printf("!( a == b ) || !( g != 5 ) is equivalent to !( ( a == b ) && ( g != 5 ) )\n");
    }
    else
    {
        printf("!( a == b ) || !( g != 5 ) is not equivalent to !( ( a == b ) && ( g != 5 ) )\n");
    }
    if (!((x <= 8) && (Y > 4)) == (!(x <= 8) || !(Y > 4)))
    {
        printf("!( ( x <= 8 ) && ( Y > 4 ) ) is equivalent to ( !( x <= 8 ) || !( Y > 4 ) )\n");
    }
    else
    {
        printf("!( ( x <= 8 ) && ( Y > 4 ) ) is not equivalent to ( !( x <= 8 ) || !( Y > 4 ) )\n");
    }
    if (!((i > 4) || (j <= 6)) == (!(i > 4) && !(j <= 6)))
    {
        printf("!( ( i > 4 ) || ( j <= 6 ) ) is equivalent to ( !( i > 4 ) && !( j <= 6 ) )\n");
    }
    else
    {
        printf("!( ( i > 4 ) || ( j <= 6 ) ) is not equivalent to ( !( i > 4 ) && !( j <= 6 ) )\n");
    }
    return 0;
}

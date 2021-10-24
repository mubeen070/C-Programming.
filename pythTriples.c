#include <stdio.h>
#define max_side 500
int main()
{
    int result, side1, side2, hyp, a, b, c;
    printf(
        "List of Pythagorean Triples for sides no more than 500.\n"
        "%-5s %-5s %s\n",
        "Side1",
        "Side2",
        "Hypotenuse");
    for (side1 = 1; side1 <= max_side; side1++)
    {
        for (side2 = side1; side2 <= max_side; side2++)
        {
            for (hyp = side2; hyp <= max_side; hyp++)
            {
                a = side1 * side1;
                b = side2 * side2;
                c = hyp * hyp;
                if (c == a + b)
                {
                    printf("%-5d %-5d %d\n", side1, side2, hyp);
                }
            }
        }
    }

    return (0);
}

#include <stdio.h>
int main()
{
    int salesperson[9] = {0};
    int gross;
    int commission;
    while (gross != -1)
    {
        printf("Enter gross sales: ");
        scanf("%d", &gross);
        if (commission >= 200 && commission <= 299)
        {
            salesperson[0]++;
        }
        else if (commission >= 300 && commission <= 399)
        {
            salesperson[1]++;
        }
        else if (commission >= 400 && commission <= 399)
        {
            salesperson[2]++;
        }
        else if (commission >= 500 && commission <= 599)
        {
            salesperson[3]++;
        }
        else if (commission >= 600 && commission <= 699)
        {
            salesperson[4]++;
        }
        else if (commission >= 700 && commission <= 799)
        {
            salesperson[5]++;
        }
        else if (commission >= 800 && commission <= 899)
        {
            salesperson[6]++;
        }
        else if (commission >= 900 && commission <= 999)
        {
            salesperson[7]++;
        }
        else if (commission >= 1000)
        {
            salesperson[8]++;
        }
        commission = 200 + (.09 * gross);
    }
    printf("a) $200-299:%d\n", salesperson[0]);
    printf("b) $300-399: %d\n", salesperson[1]);
    printf("c) $400-499: %d\n", salesperson[2]);
    printf("d) $500-599; %d\n", salesperson[3]);
    printf("e) $600-699: %d\n", salesperson[4]);
    printf("f) $700-799: %d\n", salesperson[5]);
    printf("g) $800-899: %d\n", salesperson[6]);
    printf("h) $900-999: %d\n", salesperson[7]);
    printf("i) $1000 and over: %d\n", salesperson[8]);
    return 0;
}

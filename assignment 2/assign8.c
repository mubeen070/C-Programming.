#include <stdio.h>
int main()
{
    int arr[6][5] = {0};
    int salesperson;
    int product;
    int sales;
    for (int i = 0; i < 4; i++)
    {
        printf("enter salesperson number (1-4): ");
        scanf("%d", &salesperson);
        printf("enter product code (1-5): ");
        scanf("%d", &product);
        printf("enter sales amount: ");
        scanf("%d", &sales);
        arr[product - 1][salesperson - 1] = sales;
    }
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i < 5)
                arr[5][i] += arr[j][i];
        }
    }
    printf("\n\n");
    printf("code salesperson1 salesperson2 salesperson3 salesperson4 total\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%2d", i + 1);
        for (int j = 0; j < 5; j++)
        {
            if (j < 4)
                arr[i][4] += arr[i][j];
            printf("%12d", arr[i][j]);
        }
        printf("\n");
    }
    printf("t");
    for (int j = 0; j < 5; j++)
    {
        if (j < 5)
            printf("%12d", arr[5][j]);
    }
    printf("\n");

    return 0;
}
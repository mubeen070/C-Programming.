#include <stdio.h>
int main()
{
    int i, ssum = 0, csum = 0, n;
    printf("Enter starting number:  \n");
    scanf("%d", &i);
    printf("Enter limit:  ");
    scanf("%d", &n);

    for (int i; i <= n; i++)
    {
        ssum +=  (i * i);
        csum +=  (i * i * i);
    }
    printf("\nThe sum of squares from %d to %d number is : %d \n",i, n, ssum);

    printf("\nThe sum of cubes from %d to %d number is : %d\n", i, n, csum);

    return 0;
}
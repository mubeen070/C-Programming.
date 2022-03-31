#include <stdio.h>

int main()
{
    int n;
    float tempCel, tempFaren;
    printf("Enter starting temp: \n");
    scanf("%f", &tempCel);
    printf("Enter limit: \n");
    scanf("%d", &n);
    for (tempCel ; tempCel <= n ; tempCel++ )
    {
        tempFaren = (float)(tempCel * 9 / 5) + 32;
        printf("%.2f Celsius =  %.2f Farenheit\n", tempCel, tempFaren);
        
    }
    return 0;
}
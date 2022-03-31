#include <stdio.h>
#define arraySize 10
#define row 3
#define column 10

int main(void)
{

    int array1[arraySize];

    int array2[row][column];

    for (size_t i = 0; i < arraySize - 1; i++)
    {
        array1[i] = i;
    }
    for (size_t i = 0; i < row - 1; i++)
    {
        for (size_t j = 0; j < column; j++)
        {
            array2[i][j] = i + j;
        }
    }
    puts("The 1-D array is : ");
    for (size_t k = 0; k < arraySize - 1; k++)
    {
        printf("%d   \n", array1[k]);
    }
    puts("The 2-D array is :");
    for (size_t l = 0; l < row; l++)
    {
        for (size_t m = 0; m < column; m++)
        {

            printf("%5d  ", array2[l][m]);
        }
        puts("");
    }
}
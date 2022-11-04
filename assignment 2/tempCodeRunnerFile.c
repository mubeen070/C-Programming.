
#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < size; j++)
        {
            if (array[j] < array[min_idx])
                min_idx = j;
        }
        swap(&array[min_idx], &array[i]);
    }
}

int main()
{
    int data[] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
    int size = sizeof(data) / sizeof(data[0]);
    selectionSort(data, size);
    printf("Sorted array in Acsending Order:\n");
    for (int i = 0; i < size; ++i)
    {
        printf("%d  ", data[i]);
    }
    printf("\n");
}
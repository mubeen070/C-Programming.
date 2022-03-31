#include <stdio.h>
#define SIZE 20
void printUnion(int arr1[], int arr2[], int m, int n);

int main(void)
{
    int arr1[] = {0, 2, 1, 3, 4, 5};
    int arr2[] = {2, 42, 1, 2, 3, 2};
    int m, n;
    m = sizeof(arr1) / sizeof(arr1[0]);
    n = sizeof(arr2) / sizeof(arr2[0]);
    printUnion(arr1, arr2, m, n);
    return 0;
}
void printUnion(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
            printf("%d\t", arr1[i++]);
        else if (arr2[j] < arr1[i])
            printf("%d\t", arr2[j++]);
        else
        {
            printf("%d\t", arr2[j++]);
        i++;
        }
    }

    while (i < m)
    {
        printf("%d\t", arr1[i++]);
    }
    while (j < n)
    {
        printf("%d\t", arr2[j++]);
    }

}

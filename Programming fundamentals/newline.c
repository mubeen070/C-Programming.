#include <stdio.h>
int largest(int [], int);
int main()
{
    int a, b,n;
    int m = 5;
    int arr[5] = {5, 1, 9, 6, 3};
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        scanf("%d", &a);
        scanf("%d", &b);
        if (a > b)
        {
            printf("%d", a);
        }
        else if (b > a)
        {
            printf("%d", b);
        }
        break;
    case 2:
        printf("%d",largest(arr,5));

        break;
    case 3:
        printf("Invalid message.");
        break;
    default:
        break;
    }
}
int largest(int arr[], int n)
{
    int i;
    
    // Initialize maximum element
    int max = arr[0];
 
    // Traverse array elements from second and
    // compare every element with current max 
    for (i = 0; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
 
    return max;
}
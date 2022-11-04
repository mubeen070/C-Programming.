#include <stdio.h>

int main(void)
{
    //defining variables
    int i, Number, startingNum, endingNum, count;
    
    printf("\n Enter a starting and ending numbers:\n");
    scanf("%d %d", &startingNum, &endingNum);
    Number = startingNum;
    printf("Prime numbers between %d and %d are: \n", startingNum, endingNum);
    while (Number <= endingNum)
    {
        count = 0;
        i = 2;
        while (i <= Number / 2)
        {
            if (Number % i == 0)
            {
                count++;
            }
            i++;
        }
        if (count == 0 && Number != 1)
        {
            printf("%d \t", Number);
        }
        Number++;
    }
    return 0;
}
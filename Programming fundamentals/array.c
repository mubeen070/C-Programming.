#include <stdio.h>
#define SIZE 5
int main(void){
    int num[SIZE];
    printf("Enter 5 integers: \n");
    for (int i = 0; i < SIZE; ++i)
    {
        scanf("%d", &num[i]);
    }
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", num[i]);
    }
    
    
}
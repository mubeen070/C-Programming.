#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random(int min, int max); //prototype
int main(void){
    int min, max, count;
    printf("Enter no. of random numbers to be printed: \n");
    scanf("%d", &count);

    printf("Enter the starting value : \n");
    scanf("%d", &min);

    printf("Enter the max value: \n");
    scanf("%d", &max);
    srand(time(NULL));
    for(int i=1; i<=count; i++)
    {
    printf("The random number is: %d\n", random(min, max));
    }
}
int random(int min, int max){
    int randomn;
    randomn=(rand() % (max - min + 1)) + min;
    
    return randomn;
}
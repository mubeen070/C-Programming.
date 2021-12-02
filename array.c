#include <stdio.h>

#define SIZE 5
int main(void){
    int num[SIZE]={};
    int n;
    for (size_t i = 1; i < SIZE; ++i)
    {
        n = num[i];
    }
    printf("%d", n);
}
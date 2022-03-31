#include <stdio.h>

int main (voic){
    int posInt , var=0 , position=1 , rem=0;

    printf("Enter a decimal positive integer:\n");
    scanf("%d", &posInt);

    while(posInt){
        rem = posInt % 2;
        posInt = posInt / 2;
        var = var + (rem * position);
        position = position * 10;
    }
    printf("The binary equivalent to decimal number is: %d" , var);

    return 0;
}
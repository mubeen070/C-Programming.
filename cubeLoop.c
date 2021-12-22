#include <stdio.h>

int main(void){
    int num , cube, n, i=1;
    printf("Enter ending number: \n");
    scanf("%d", &n);
    for (i; i<=n; i++){
        printf("Enter a number: \n");
        scanf("%d", &num);
        cube=num*num*num;
        printf("The cube of %d is : %d\n", num, cube);
    }
}
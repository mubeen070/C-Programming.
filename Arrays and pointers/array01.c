//set elements of array value to zero.

#include <stdio.h>

int main(void){
    int a[10];

    for(size_t i=0; i<10; i++){
        a[i]=0;
    }
    for (size_t i = 0; i < 10; i++)
    {
        printf("%10u\t%d\n", i, a[i]);
    }
    
    
}
#include <stdio.h>
unsigned long long int fab(unsigned x);
int main(void){
    unsigned x;
    printf("Enter an integer: \n");    
    scanf("%d", &x);
    printf("Fabonacci(%d) = %llu", x, fab(x));
}
unsigned long long int fab(unsigned x){
    if(x == 0 || x == 1){
        return x;
    }
    else{
        return fab(x-1)+fab(x-2);
    }
}
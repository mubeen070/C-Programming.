#include <stdio.h>
long long factorial(unsigned x);
int main(void){
    int max;
    printf("From 0 to max:  \n");
    scanf("%d", &max);
    for (unsigned int i = 0; i <=max; ++i) {
    printf("%u! = %llu\n", i, factorial(i));
    }
}
long long factorial(unsigned x){
    if(x<=1){
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
}
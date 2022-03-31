#include <stdio.h>
#define SIZE 6  
int main(){

    int a[SIZE]= {0,32,323,23,23, 02};
    int (*p)[SIZE]= &a;
for(size_t i=0; i<SIZE-1;i++){
    printf("%d\t", *(*p+i));
    }
}
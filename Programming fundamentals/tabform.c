#include <stdio.h>

int main(void){
    int n, x, y, z;
    
    printf("N \t10*N \t100*N \t1000*N\n");

    for(n=1; n<=10; n++){
        
        x=10*n;
        y=100*n;
        z=1000*n;
        printf("%d \t%d \t%d \t%d\n",n,x,y,z);
    }
}
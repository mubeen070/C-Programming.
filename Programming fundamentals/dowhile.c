#include <stdio.h>
int main(void){
    int counter=2;
    do{
        if(counter %2 ==0)
        printf("%d\n", counter);
        counter+=2;


    }while(counter<100);

}
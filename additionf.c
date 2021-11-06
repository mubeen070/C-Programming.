#include <stdio.h>

double addition(double x, double y){
    float add;
    add= x+y;
    return add;
}
int main(void){
    float x, y;
    float sum;
    printf(" Function : Addition of two integers  \n");
    printf("________________________________________\n");
    printf("Enter the value of x : \t");
    scanf("%f" , &x);
    printf("Enter the value of y: \t ");
    scanf("%f" , &y);
    sum=  addition(x,y);
    printf("The sum of %.2f and %.2f is : %.2f" ,x ,y, sum);
    return 0;
}
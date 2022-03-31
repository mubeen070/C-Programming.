#include<stdio.h>

int max(int , int, int);
int main(void){
    int x,y,z, max1;
    printf("input 3 numbers: \n");
    scanf("%d %d %d", &x,&y,&z);

    max1= max(x,y,z);
    printf("max among %d %d %d is = %d", x,y,z,max1);


}
int max(int n1, int n2, int n3){
    int max=n1;
    
    if(n2>max){
        max=n2;
    } 
        if(n3>max){
            max=n3;;
        }
    return max;
}
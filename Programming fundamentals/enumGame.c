#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status{CONTINUE, WIN, LOSE};
int rolldice(void);
int main(void){
    srand(time(NULL));
    int mypoint;
    enum Status gamestatus;
    int sum= rolldice();
    switch (sum)
    {
    case7:
    case11:
        gamestatus=WIN;
        break;
    case2:
    case3:
    case12:
        gamestatus=LOSE;
        break;
    default:
        gamestatus=CONTINUE;
        mypoint= sum;
        printf("Point is %d\n", mypoint);
        break;
    }
    while(gamestatus==CONTINUE)
    {
        sum= rolldice();
        if(sum==mypoint){
            gamestatus=WIN;
        }
        else{
            if(7==sum){
                gamestatus=LOSE;
            }
        }
    }
    if(gamestatus==WIN){
        printf("\nPLAYER WON!!!");

    }else{
        printf("\nPlayer lost!!!");
    }
}
int rolldice(void){
    int die1, die2, sum=0;
    die1= 1 + (rand()%6);
    die2= 1 + (rand()%6);
    sum= die1+ die2;
    printf("The sum of die1: %d and die2: %d is = %d\n", die1, die2, sum);
    return sum;
}
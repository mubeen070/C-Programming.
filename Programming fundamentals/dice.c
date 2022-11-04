#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status {CONTINUE, WON, LOST};
int rolldice(void);

int main(void){
    srand(time(NULL));
    int mypoint;
    enum Status gameStatus;
    int sum= rolldice();
    switch(sum){
        case 7:
        case 11:
            gameStatus= WON;
            break;
        case 2:
        case 3:
        case 12:
            gameStatus=LOST;
            break;
        default:
            gameStatus=CONTINUE;
            mypoint=sum;
            printf("Point is: %d\n", mypoint);
            break;
    }
    while(CONTINUE==gameStatus){
        sum=rolldice();
        if(sum==mypoint){
            gameStatus= WON;
        }else{
            if(7==sum){
                gameStatus= LOST;
            }
        }
        
    }
    if(WON == gameStatus){
        printf("Player wins!");
    }
    else{
        printf("Player loses!");
    }
}
int rolldice(void){
    int die1, die2; 
    die1= 1 + (rand()%6);
    die2= 1 + (rand()%6);

printf("Player rolled %d and %d and the sum is: %d\n",die1, die2, die1+die2);
return die1+die2;
}
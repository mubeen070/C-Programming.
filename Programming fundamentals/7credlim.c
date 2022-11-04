#include <stdio.h>
int main(void)
{
    int accountnum, credit, balance;
    for (int i = 1; i <= 3; i++)
    {
        printf("********** Enter data of customer %d **********\n", i);
        printf("Enter Account number: \n");
        scanf("%d", &accountnum);
        
        printf("Enter your credit limit before recession: \n");
        scanf("%d", &credit);
        
        printf("Enter your current balance: \n");
        scanf("%d", &balance);
        
        printf("your new credit limit is %d: \n", credit / 2);
        
        if (balance > credit / 2)
            printf("your balance is greater than your new credit limit \n \n");
            else {
                printf("Your balance is less than you cred limit: \n \n");
            }
        
    }
    return 0;
}
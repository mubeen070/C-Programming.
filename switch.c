// Program to create a simple calculator
#include <stdio.h>

int main() {
    int operation;
    double n1, n2;

    printf("Enter an operator (1+, 2-, 3*, 4/): ");
    scanf("%d", &operation);


    switch(operation)
    {
        case 1:
            printf("Enter two operands: ");
            scanf("%lf %lf",&n1, &n2);
            printf("%.1lf + %.1lf = %.1lf",n1, n2, n1+n2);
            break;

        case 2:
            printf("Enter two operands: ");
            scanf("%lf %lf",&n1, &n2);
            printf("%.1lf - %.1lf = %.1lf",n1, n2, n1-n2);
            break;

        case 3:
            printf("Enter two operands: ");
            scanf("%lf %lf",&n1, &n2);
            printf("%.1lf * %.1lf = %.1lf",n1, n2, n1*n2);
            break;

        case 4:
            printf("Enter two operands: ");
            scanf("%lf %lf",&n1, &n2);        
            printf("%.1lf / %.1lf = %.1lf",n1, n2, n1/n2);
            break;

        // operator doesn't match any case constant +, -, *, /
        default:
            printf("Error! operator is not correct");
    }

    return 0;
}
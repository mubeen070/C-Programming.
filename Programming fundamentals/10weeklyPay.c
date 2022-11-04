#include <stdio.h>
int main(void)
{
    int paycode = 0;
    double weeklysalary;
    double hourlysalary;
    int hours;
    double grosssales;
    double payperitem;
    int items;
    double totalpay;
    printf("Enter paycode for employee (To exit press -1): \n  \n");
    scanf("%d", &paycode);

    while (paycode != -1)
    {
        switch (paycode)
        {
        case 1:
            printf("Enter weekly salary for this manager: ");
            scanf("%lf", &weeklysalary);
            totalpay = weeklysalary;
            break;
        case 2:
            printf("Enter hourly salary for this hourly worker: ");
            scanf("%lf", &hourlysalary);
            printf("Enter number of hours worked: ");
            scanf("%d", &hours);
            if (hours <= 40)
                totalpay = hours * hourlysalary;
            else
                totalpay = 40 * hourlysalary + (hours - 40) * hourlysalary *1.5;
            break;
        case 3:
            printf("Enter gross sales for this comission worker:  \n");
            scanf("%lf", &grosssales);
            totalpay = 250 + grosssales * 0.057;
            break;
        case 4:
            printf("Enter number of produced items for this pieceworker: ");
            scanf("%d", &items);
            printf("Enter pay for each item: ");
            scanf("%lf", &payperitem);
            totalpay = items * payperitem;
            break;
        default:
            printf("Wrong input!");
            totalpay = 0;
            break;
        }
        printf("Total weekly pay is %lf ", totalpay);
        printf("\nEnter paycode for next employee (-1 for exit): ");
        scanf("%d", &paycode);
    }
    return 0;
}

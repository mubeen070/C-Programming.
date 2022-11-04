#include <stdio.h>

int main (void)
{
int noStudents, Total, count, grade, average;
printf("Enter no. of students: \n");
scanf("%d" , &noStudents);

while (count <= noStudents)
{
    printf("Enter grade of students %d" , count);
    scanf("%d", grade);
    count= count + 1;
}
average = Total/noStudents;
printf("The average grade of the class is = %d", average);
return 0;
}
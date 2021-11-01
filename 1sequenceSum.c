 #include <stdio.h>
 int main(void)
 {
     long i = 0 , x, sum=0 , y=0; 
     float average=0;
     if (i < 1) {
         printf("How many values do you wish to sum: ");
         scanf("%d" , &i);
     }   
     for (x = 0; x < i; x++) {
         printf("Enter the next value: ");
         scanf("%d", &y);
         sum = (sum += y);
         average=(float)sum/i;
     }
        
     printf("You summed %d numbers for a total of: %d\n", i, sum);
     printf("The average is %.2f", average);
     return 0;
 }

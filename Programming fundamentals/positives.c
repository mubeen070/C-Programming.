#include<stdio.h> 
int main() 
{ 
int n;
int number; 
int i; 
int positives=0; 
int negatives=0; 
int zeros=0; 
printf("Enter the numbers limit : "); 
scanf("%d",&n); 
printf("Enter %d numbers: \n",n); 
for(i=1;i<=n;i++) 
{ 
scanf("%d",&number); 
if(number>=1) 
positives++; 
else if(number<0) 
negatives++; 
else 
zeros++; 
} 
printf("Total no. of Positive numbers %d \n",positives); 
printf("Total no. of Negative numbers %d \n",negatives); 
printf("Total no. of Zero %d \n",zeros); 
} 
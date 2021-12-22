#include <stdio.h>
int main()
{
double sales[20]; 
int i;
for (i=0; i<20;++i){
printf("Enter sales number %d ",i+1); 
scanf("%f", &sales[i]); 
printf("\n"); 
}
return 0;
}

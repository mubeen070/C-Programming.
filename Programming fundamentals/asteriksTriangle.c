#include <stdio.h>

int main(void){
    int totalRows,row, space, symbol;
    printf("Enter the number of rows: \n");
    scanf("%d", &totalRows);

    for(row=1; row<=totalRows; row++){
        for(space=1; space<=(totalRows-row); space++)
            printf(" ");
            for(symbol=1; symbol<=((2*row)-1); symbol++)
                printf("*");
            
            printf("\n");
        
    }
}
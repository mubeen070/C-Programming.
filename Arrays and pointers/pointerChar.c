#include <stdio.h>
#include <ctype.h>
/*void converToUppercase(char *sPtr){
    while (*sPtr != '\0'){
        *sPtr = toupper(*sPtr);
        ++sPtr;
    }
}*/
void printChar(const char *cPtr){
    for (; *cPtr != '\0'; cPtr++)
    {
        printf("%c" , cPtr);
    }
    
}
void main(){
    char str[]="haPPy Birthday";
    printf("String before conversion:\n");
    printf("%s\n", str);
    //converToUppercase(str);
    printChar(str);
    printf("The string after conversion is:\n");
    printf("%s" , str);
}
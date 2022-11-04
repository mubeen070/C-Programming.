#include <stdio.h>

int main() {
 int sales[5][4] = { 88, 77, 70, 53, 88, 57, 45, 19, 2, 78,
 15, 8, 88, 47, 49, 46, 65, 35, 15, 47 };
 int i, j;
 int totalProduct[5] = { 0 }, totByPerson[4] = { 0 };
 printf("%7s%7s%7s%7s%7s%7s\n", "P\\N", "John", "Ellie", "Bale", "Dele", "TOTAL");
 for (i = 0; i < 5; i++) {
  printf("%7d", i + 1);
  for (j = 0; j < 4; j++) {
   printf("%7d", sales[i][j]);
   totalProduct[i] += sales[i][j];
   totByPerson[j] += sales[i][j];
  }
  printf("%7d\n", totalProduct[i]);
 }
 printf("%7s%7d%7d%7d%7d\n", "TOTAL", totByPerson[0],totByPerson[1],totByPerson[2],totByPerson[3]);
 return 0;
}

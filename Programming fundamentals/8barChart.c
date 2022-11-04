#include <stdio.h>
int main()
{
	int start, y, number;
	printf("Enter 5 numbers between 1 and n: \n");
	for (start = 0; start < 5; start++)
	{
		scanf("%d", &number);
		for (y = 0; y < number; y++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
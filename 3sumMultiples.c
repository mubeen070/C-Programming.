#include <stdio.h>

int main()
{
	int num, i, n, sum = 0;
	
	printf("Input an integer:  ");
	scanf("%d", &num);

	printf("\nEnter limit:  ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		if ((i % num) == 0)
		{
			printf("\n%d\n", i);

			sum = sum + i;
		}
	}
	printf(" Sum of Multiples is: %d", sum);
	return 0;
}
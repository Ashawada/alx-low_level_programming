#include <stdio.h>
#include <stdlib.h>

/**
*main - prints count of multiples of 3 or 5 below 1024
*
*Return: return 0 (Success)
*/

int main(void)
{
	int n1, n2, sum1, sum2;

	sum2 = 1024;
	sum1 = 0;

	for (n1 = 0; n1 < n2; n1++)
	{
		if ((n1 % 3 == 0) || (n1 % 5 == 0))
			sum1 = sum1 + n1;
		else
			continue;
	}

	printf("%d", total);
	printf("\n");

	return (0);
}

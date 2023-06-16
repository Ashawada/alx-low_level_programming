#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Description: 'using the main if to print last digit of a random num function'
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n, ln;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ln = n % 10;
	if (ln > 5)
	{
	printf("Last digit of %d is %u and is greater than 5\n", n, ln);
	}
	else if (ln == 0)
	{
	printf("Last digit of %d is %u and is 0\n", n, ln);
	}
	else if (ln < 6 && n != 0)
	{
	printf("Last digit of %d is %u and is less than 6 and not 0'\n", n, ln);
	}
	return (0);
}

#include "main.h"

/**
*main - prints count of multiples of 3 or 5 below 1024
*
*Return: return 0 (Success)
*/

int main(void)
{
	int total, num

	for (num = 0; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}
	printf("%d\n", sum);
	return (0);
}

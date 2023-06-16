#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Description: 'prints all possible different combinations of three digits.'
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int num1, num2;

	num1 = 0;
	while (num1 <= 99)
	{
		num2 = num1;
		while (num2 <= 99)
		{
			if (num2 != num1)
			{
				putchar((num1 / 10) + 48);
				putchar((num1 % 10) + 48);
				putchar(' ');
				putchar((num2 / 10) + 48);
				putchar((num2 % 10) + 48);
				if (num1 != 98 || num2 != 99)
				{
				putchar(',');
				putchar(' ');
				}
				}
				num2++;
			}
			num1++;
	}
	putchar('\n');
	return (0);
}

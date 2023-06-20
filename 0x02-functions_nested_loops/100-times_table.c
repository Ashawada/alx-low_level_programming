#include "main.h"

/**
* print_times_table - prints the n times table, starting with 0.
*
* @n: check the input
*
* Return: sum of a & b
*/
void print_times_table(int n)
{
int num, m, p;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');

		for (m = 1; m <= n; m++)
		{
			_putchar(',');
			_putchar(' ');
			p = num * m;
				if (p <= 99)
					_putchar(' ');
				if (p <= 9)
					_putchar(' ');
				if (p >= 100)
				{
					_putchar((p / 100) + '0');
					_putchar((p / 10) % 10 + '0');
				}
				else if (p <= 99 && p >= 10)
				_putchar((p / 10) + '0');
			_putchar((p % 10) + '0');
		}
		_putchar('\n');
		}
	}
}

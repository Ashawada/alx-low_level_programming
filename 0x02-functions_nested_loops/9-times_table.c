#include "main.h"

/**
* times_table - prints the 9 times table, starting with 0.
*
*/
void times_table(void)

{
	int i, m, p;

	for (i = 0; i <= 9; i++)
		_putchar(48);
		for (m = 1; m <= 9; m++)
		{
			_putchar(',');
			_putchar(' ');
			p = i * m;
		if (p <= 9)
			_putchar(' ');
		else
			_putchar((p % 10) + 48);
		}
			_putchar('\n');
}

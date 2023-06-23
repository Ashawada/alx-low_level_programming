#include "main.h"

/**
 * print_most_numbers -  prints the numbers, from 0 to 9 except 2 & 4
*/

void print_most_numbers(void)

{
	int i = 0;

	while (i <= 9)
	{
		if (i == 2 || i == 4)
			i++;
		_putchar(i + 48);
		i++;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_line -  prints line in the terminal.
 * @n : no of trials
*/

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

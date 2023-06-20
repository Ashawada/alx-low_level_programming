#include "main.h"

/**
* print_last_digit -  Prints the last digit of a number.
*
* @n: takes an integer input
*
* Return: ln (last digit)
*
*/
int print_last_digit(int n)

{
	int ln = n % 10;

	if (ln < 0)
		ln = (-1) * ln;
	else
		ln = ln;
	_putchar(ln + '0');
	return (ln);
}

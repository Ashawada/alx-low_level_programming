#include "main.h"

/**
 * print_triangle -  A function that prints a triangle
 * @size : thesize of the triangle
*/

void print_triangle(int size)
{
	int H, B;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (H = 1; size >= H; ++H)
		{
			for (B = 1; size >= B; ++B)
			{
				if ((H + B) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}

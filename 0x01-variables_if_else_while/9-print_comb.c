#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Description: 'prints all the numbers of base 16 in lowercase'
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int num;

	num = '0';
	while (num <= '9')
	{
	putchar(num);
	putchar(',');
	putchar(' ');
	num++;
	}
	putchar('\n');
	return (0);
}

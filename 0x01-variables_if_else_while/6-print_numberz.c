#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Description: 'using the main if to print numbers from 0 to 9, no char'
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int num;

	num = 48;
	while (num <= 57)
	{
	putchar(num);
	num++;
	}
	putchar('\n');
	return (0);
}

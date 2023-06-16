#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Description: 'using the main if to print alphabet in small without e & q'
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char ch;

	ch = '0';
	while (ch <= '9')
	{
	putchar(ch);
	ch++;
	}
	putchar('\n');
	return (0);
}

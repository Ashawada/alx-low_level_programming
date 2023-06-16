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

	ch = 'a';
	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
		ch++;
	putchar(ch);
	ch++;
	}
	putchar('\n');
	return (0);
}

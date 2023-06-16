#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
*
* Description: 'using the main if to print alphabet in small & upper case'
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
	printf("%c", ch);
	ch++;
	}
	ch = 'A';
	while (ch <= 'Z')
	{
	printf("%c", ch);
	ch++;
	}
	putchar('\n');
	return (0);
}

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
	char ch;
	int num;

	ch = 'a';
	num = '0';
	while (num <= '9')
	{
	putchar(num);
	num++;
	}
	while (ch <= 'f')
	{
	putchar(ch);
	ch++;
	}
	putchar('\n');
	return (0);
}

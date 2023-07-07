#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: argument count
 * @argv: argument arry
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	(void)argv;
	while (--argc)
		sum++;
	printf("%d\n", sum);
	return (0);
}

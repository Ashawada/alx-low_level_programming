#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: string input parameter
 * Return: length of string
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; ++s)
		++counter;

	return (counter);
}

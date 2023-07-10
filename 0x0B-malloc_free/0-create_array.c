#include <stdlib.h>
#include "main.h"

/**
* create_array - creates an array of chars,
* and initializes it with a specific char
* @size: size of an array
* @c: char to be filledin the array
* Return: string of chars
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(sizeof(char) * size);
	if (!size || !ptr)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}

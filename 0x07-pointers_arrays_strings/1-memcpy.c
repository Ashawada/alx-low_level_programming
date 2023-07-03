#include "main.h"

/**
* *_memcpy - function that copies memory area.
* @dest: memory area to be filled
* @scr: char to be copied
* @n: number of times to copy b
*
* Return: pointer to the memory area dest
*/
char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = scr[i];
	}

	return (dest);
}

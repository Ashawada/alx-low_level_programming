#include "main.h"

/**
* _islower - 'Checking if c is lower case'
*
* @c: check input
*
* Return: 1 if 'c' is lowercase or 0 if not.
*/
int _islower(int c);
{
	if (c >= 97 && c <= 122)
	return (1);
	return (0);

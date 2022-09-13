#include "main.h"

/**
 * _islower - Check Main
 * @c: Using the character in ASCII code
 *
 * Description: A function that returns 1 if c is lowercase character
 * returns 0 otherwise
 *
 * Return: 1 for small letters and 0 for the rest.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

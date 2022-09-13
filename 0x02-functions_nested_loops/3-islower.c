#include "main.h"

/**
 * _islower - Shows 1 if c is lowercase character
 * for another cases, show o
 *
 * @c: ASCII code is used
 *
 * Return: 1 for lowercase chareacter 0 for  otherwise
 */

int _islower(int c);
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

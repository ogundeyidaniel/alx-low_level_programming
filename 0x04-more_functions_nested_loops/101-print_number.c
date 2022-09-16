#include <stdio.h>
#include "main.h"
void print_integer(int m);

/**
 * print_number - Prints a number
 * @n: The number to print
 * Return : Nothing
 */
void print_number(int n)
{
	if (n == 0)

		_putchar('0');

	else if (n < 0)
	{
		_putchar('-');

		print_integer(n * -1);
	}
	else
		print_integer(n);
}

/**
 * print_integer - A function to priting n
 * @m: an input unsigned integer
 * Return: Nothing
 */

void print_integer(int m)

{
	int i = 1000000000;

	for (; i >= 1; i /= 10)
		
		if (m / i != 0)
		{
			_putchar((m / i) % 10 + '0');
		}
}

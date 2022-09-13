#include "main.h"

/**
 * print_last_digit - a function that prints the last digit
 * of a number
 *
 * @n: input variables as an integer
 *
 * Return: last digit.
 */
int print_last_digit(int n)
{
	int b;

	b = n % 10;
	if (b < 0)
	{
		_putchar(-b + 48);
		return (-b);
	}
	else
	{
		_putchar(b + 48);
		return (b);
	}
}

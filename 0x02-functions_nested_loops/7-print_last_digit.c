#include "main.h"

/**
 * jack_bauer - a function that pritns every minutes of the day of
 * jack Bauer,starting from 00:00 to 23:59
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

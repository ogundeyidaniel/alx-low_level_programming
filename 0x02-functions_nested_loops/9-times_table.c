#include "main.h"

/**
 * times_table - a function that prints the 9 times
 * table, starting with 0.
 *
 * Return: void
 */
void times_table(void)
{
	int a, b, op;
	
	for (a = 1; a <= 9; a++)
	{
		-putchar(48);
		for (b = 1; b <= 9; b++)
		{
			op = a * b;
			_putchar(44);
			_putchar(32);
			if (op <= 9)
			{
				_putchar(32);
				_putchar(op + 48);
			}
			else
			{
				_putchar((op / 10) + 48);
				_putchar((op % 10) + 48);
			}
		}
		_putchar('\n');
	}
}

#include <stdio.h>
#include <stlib.h>
/**
 * main - print_alphabet - Prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchat(i);
	_putchar('\n');
}

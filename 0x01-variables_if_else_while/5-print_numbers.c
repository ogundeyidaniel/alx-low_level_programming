#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * mian - Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line
 * All your code should be in the main function
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}

	printf("\n");

	return (0);
}

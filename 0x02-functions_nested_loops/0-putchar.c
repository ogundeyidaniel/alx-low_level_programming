#include <unistd.h>
#include "holberton.h"

/**
 *  main - write a program thats prints _putchar
 *
 *
 *  Return: on success 0
 */
int _putchar(char c)
{ 
	return (write(1, &c, 1));
}

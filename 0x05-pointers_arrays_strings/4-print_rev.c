#include "holberton.h"

/**
 * print_rev - This function prints a string in reverse
 * @s: The string to be printed in reverse
 *
 * Return: void
 */

void print_rev(char *s)
{
	int count = 0;

	for (; *s != '\0'; s++)
	{
		count++;
	}

	for (; count > 0; count--)
	{
		s--;
		_putchar(*s);
	}

	_putchar('\n');
}

#include "holberton.h"

/**
 * print_line - This function draws a straight line in the terminal
 * @n: The number of times '_' is to be printed
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n < 0)
		{
			_putchar('\n');
			break;
		}

		_putchar('_');
	}
	_putchar('\n');
}

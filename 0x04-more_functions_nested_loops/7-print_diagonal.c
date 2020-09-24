#include "holberton.h"

/**
 * print_diagonal - This function draws a diagonal line in the terminal
 * @n: The number of times '\' is to be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n < 0)
		{
			_putchar('\n');
			break;
		}

		_putchar('\\');
	}
	_putchar('\n');
}

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
	int j = 0;

	if (n <= 0)
		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}

		_putchar('\\');
		_putchar('\n');
	}
}

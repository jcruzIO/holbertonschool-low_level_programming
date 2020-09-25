#include "holberton.h"

/**
 * print_triangle - This function prints a triangle
 * @size: The size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i;
	int j = size;

	if (size <= 0)
	{
		_putchar('\n');
	}

	while (size--)
	{
		for (i = 0; i < j; i++)
		{
			if (i < size)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}
}

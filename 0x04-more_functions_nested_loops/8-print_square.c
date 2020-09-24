#include "holberton.h"

/**
 * print_square - This function prints a square
 * @size: The size of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

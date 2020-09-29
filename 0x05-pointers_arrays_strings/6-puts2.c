#include "holberton.h"

/**
 * puts2 - This function prints every other character of a string
 * @str: The string to be printed
 *
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; i < (int)(sizeof(str) / sizeof(str[0])) + 1; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		else
			continue;
	}

	_putchar('\n');
}

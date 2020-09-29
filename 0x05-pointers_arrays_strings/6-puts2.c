#include "holberton.h"

/**
 * puts2 - This function prints every other character of a string
 * @s: The string to be printed
 *
 * Return: void
 */

void puts2(char *s)
{
	int i;

	for (i = 0; i < (int)(sizeof(s) / sizeof(s[0])) + 1; i++)
	{
		if (i % 2 == 0)
			_putchar(s[i]);
		else
			continue;
	}

	_putchar('\n');
}

#include "holberton.h"

/**
 * rev_string - This function prints a string in reverse but with an array
 * @s: The string to be printed in reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
	int size = sizeof(s) / sizeof(s[0]);
	int i;

	for (i = size; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

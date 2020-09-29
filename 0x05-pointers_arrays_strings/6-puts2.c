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

	int count = 0;
	char *tmp = str;

	for (; *str != '\0'; str++)
		count++;

	str = tmp;

	for (i = 0; i < count; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(*str);
			str++;
		}

		else
		{
			str++;
		}
	}

	_putchar('\n');
}

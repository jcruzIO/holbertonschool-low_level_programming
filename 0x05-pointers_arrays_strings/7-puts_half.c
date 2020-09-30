#include "holberton.h"

/**
 * puts_half - This function prints half of a string
 * @str: The string to be printed
 *
 * Return: void
 */

void puts_half(char *str)
{
	int count = 0;
	int n = 0;
	int i;
	char *temp = str;

	for (; *str != '\0'; str++)
		count++;

	str = temp;

	if (count % 2 == 0)
		n = count / 2;
	else
		n = (count - 1) / 2;

	for (i = n; i < count; i++)
		_putchar(*(str + i));

	_putchar('\n');
}

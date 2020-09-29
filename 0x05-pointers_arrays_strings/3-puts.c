#include "holberton.h"

/**
 * _puts - This function prints a string
 * @str: Character string to be printed
 *
 * Return: void
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
		_putchar(*str);

	_putchar('\n');
}

#include "holberton.h"
/**
 * print_alphabet - This function prints the alphabet in lowercase
 *
 * Return: void
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);

	_putchar('\n');
}

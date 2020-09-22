#include "holberton.h"
/**
 * print_sign - This function prints the sign of a number
 * @n: The number to passed against positve and negative check
 *
 * Return: 1 if c is a letter, uppercase, or lowercase
 * 0 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

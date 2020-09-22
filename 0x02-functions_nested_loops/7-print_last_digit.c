#include "holberton.h"
/**
 * print_last_digit - This function prints the last digit of a number
 * @n: Number whose last digit will be printed
 *
 * Return: Last digit of number
 */

int print_last_digit(int n)
{
	int x;

	if (n < 0)
	{
		x = -1 * n;
		x %= 10;
		_putchar(x + '0');
		return (x);
	}
	else
	{
		x = n % 10;
		_putchar(x + '0');
		return (x);
	}

	return (n % 10);
}

#include "holberton.h"
/**
 * _abs - This function computes the absolute value of an integer
 * @n: The number to be passed to compute absolute value
 *
 * Return: 1 if c is a letter, uppercase, or lowercase
 * 0 otherwise
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}

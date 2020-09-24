#include "holberton.h"
/**
 * _isdigit - This function checks whether a given character is a digit or not
 * @c: The character to be checked
 *
 * Return: 1 if character is a digit; 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

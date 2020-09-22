#include "holberton.h"
/**
 * _islower  - This function checks for a lowercase character
 * @c: The number checked for lowercase condition
 *
 * Return: 1 if c is lowercase
 * 0 otherwise
 */

int _islower(int c)
{
	if ((int)c >= 97 && (int)c <= 122)
		return (1);
	else
		return (0);
}

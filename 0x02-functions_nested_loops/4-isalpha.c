#include "holberton.h"
/**
 * _isalpha - This function checks whether a character is alphabetical or not
 * @c: The number checked for letter, lowercase, and uppercase conditions
 *
 * Return: 1 if c is a letter, uppercase, or lowercase
 * 0 otherwise
 */

int _isalpha(int c)
{
	int lowercase = ((int)c >= 97 && (int)c <= 122);
	int uppercase = ((int)c >= 65 && (int)c <= 90);

	if (lowercase || uppercase)
		return (1);
	else
		return (0);
}

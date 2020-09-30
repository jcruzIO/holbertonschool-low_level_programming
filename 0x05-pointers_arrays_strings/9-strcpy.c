#include "holberton.h"

/**
 * _strcpy - This function copies the string pointed to by src to the
 * buffer pointed to by dest
 * @dest: Where the string gets sent
 * @src: The original string
 *
 * Return: char pointer
 */

char *_strcpy(char *dest, char *src)
{
	char *temp;

	temp = dest;

	while ((*dest++ = *src++))
	{

	}

	return (temp);
}

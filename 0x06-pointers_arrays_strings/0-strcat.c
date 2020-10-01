#include "holberton.h"

/**
 * _strcat - This function concatenates two strings
 * @dest: Place where the src is copied to
 * @src: Text to be copied
 *
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	for (; dest[i] != '\0';)
		i++;

	for (; src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}

	dest[i + 1] = '\0';

	return (dest);
}

#include "holberton.h"

/**
 * _strncpy - This function copies one string into another with limit of up
 * to n bytes
 * @dest: Place where the src is copied to
 * @src: Text to be copied
 * @n: Number of bytes function will copy up to
 *
 * Return: char*
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

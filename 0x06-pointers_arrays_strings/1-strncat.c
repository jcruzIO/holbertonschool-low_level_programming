#include "holberton.h"

/**
 * _strncat - This function concatenates two strings with limit of up
 * to n bytes
 * @dest: Place where the src is copied to
 * @src: Text to be copied
 * @n: Number of bytes function will copy up to
 *
 * Return: char*
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0';)
		i++;

	n += i;

	for (j = 0; (dest[i++] = src[j++]) != '\0' && i < n;)
	{
	}

	return (dest);
}

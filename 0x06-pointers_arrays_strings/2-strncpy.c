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
	int i = 0;
	int j = 0;

	for (; (dest[i++] = src[j++]) != '\0' && i < n ;)

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

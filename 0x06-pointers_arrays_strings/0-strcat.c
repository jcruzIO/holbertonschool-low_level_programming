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
	int i;
	int j;

	for (i = 0; dest[i] != '\0';)
		i++;

	for (j = 0; (dest[i++] = src[j++]) != '\0';);

	dest[i + 1] = '\0';

	return (dest);
}

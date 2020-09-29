#include "holberton.h"

/**
 * _strlen - This function returns the length of a string
 * @s: Character string to be passed
 *
 * Return: Length of string
 */

int _strlen(char *s)
{
	int count = 0;

	for (; *s != '\0'; s++)
		count++;

	return (count);
}

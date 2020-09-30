#include "holberton.h"

/**
 * rev_string - This function prints a string in reverse but with an array
 * @s: The string to be printed in reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
	int size = sizeof(s) / sizeof(s[0]);
	int n = size;
	int i;
	char temp;

	for (i = 0; i < n; i++, n--)
	{
		temp = *(s + i);
		*(s + i) = *(s + n);
		*(s + n) = temp;
	}
}

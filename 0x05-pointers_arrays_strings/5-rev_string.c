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
	int i;
	int j = 0;
	char s2[10];

	for (i = size; i >= 0; i--, j++)
	{
		s2[j] = s[i];
	}

	size = sizeof(s2) / sizeof(s2[0]);

	for (i = 0; i < size - 1; i++)
	{
		s[i] = s2[i];
	}

}

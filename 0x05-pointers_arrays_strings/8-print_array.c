#include "holberton.h"
#include <stdio.h>

/**
 * print_array - This function prints half of a string
 * @a: Array of integers to be passed
 * @n: Number of elements to be printed
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		if (i == n - 1)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);

	printf("\n");
}

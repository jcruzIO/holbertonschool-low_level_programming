#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - This functions prints all natural number from n to 98
 * @n: Starting number
 *
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	if (n == 98)
	{
		printf("%d\n", n);
	}

	else if (n > 98)
	{
		printf("%d\n", n);
	}
	else
	{
		for (i = n; i < 99; i++)
		{
			if (i == 98)
			{
				printf("%d", i);
				continue;
			}
			printf("%d, ", i);
		}
		printf("\n");
	}
}

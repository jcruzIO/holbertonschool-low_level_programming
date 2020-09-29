#include "holberton.h"

/**
 * swap_int - This function swaps the values of two integers
 * @a: Initial swap
 * @b: Subsequent swap
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

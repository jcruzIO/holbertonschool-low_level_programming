#include "holberton.h"
#include <stdio.h>

/**
 * main - This program prints the largest prime factor of the number
 * 612852475143
 *
 * Return: 0 to stop program
 */

int main(void)
{
	long int arr[] = {3, 4019, 12057, 50829599, 152488797, 204284158381};
	long int largest;
	unsigned int i;

	largest = arr[0];

	for (i = 0; i < (sizeof(arr)) / (sizeof(arr[0])); i++)
	{
		if (arr[i] > largest)
			largest = arr[i];
	}

	printf("%lu\n", largest);
	return (0);
}

#include "holberton.h"
#include <stdio.h>

/**
 * main - This program prints the numbers 1 to 100. For multiples of 3, print
 * "Fizz"; for multiples of 5, print "Buzz". For both, "Fizz Buzz"
 *
 * Return: 0 to stop program
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("Fizz Buzz");
		else
			printf("%d ", i);
	}

	printf("\n");

	return (0);
}

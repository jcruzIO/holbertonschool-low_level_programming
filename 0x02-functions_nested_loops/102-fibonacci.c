#include <stdio.h>
#include "holberton.h"
/**
 * main - Program that computes the first 50 Fibonacci numbers
 *
 * Return: 0 to stop program
 */

int main(void)
{
	int i;
	int first = 1;
	int second = 2;
	unsigned long int sum = 0;

	printf("%d, %d, ", first, second);

	for (i = 0; i < 48; i++)
	{
		sum = first + second;
		second = first;
		first = sum;
		printf("%lu, ", sum);
	}
	printf("\n");

	return (0);
}

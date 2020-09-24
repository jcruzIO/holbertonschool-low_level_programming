#include <stdio.h>
#include "holberton.h"
/**
 * main - Program that computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 *
 *
 * Return: 0 to stop program
 */

int main(void)
{
	int i;
	int sum;

	for (i = 0; i < 1024; i++)
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;

	printf("%d\n", sum);
}

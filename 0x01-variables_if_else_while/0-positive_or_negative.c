#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Program that generates random numbers using conditional statements
*
* Return: 0 to stop program
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}

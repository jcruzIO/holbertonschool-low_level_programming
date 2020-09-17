#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Program that generates random numbers and uses
* conditional statements to determine three possible paths
* to take
*
* Return: 0 to stop program
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last of digit of %d is %d", n, n % 10);

	if (n > 5)
		printf("%s", " and is greater than 5\n");
	else if (n > 0)
		printf("%s", " and is 0\n");
	else if (n < 6 && n != 0)
		printf("%s", "%d and is less than 6 and not 0\n");

	return (0);
}

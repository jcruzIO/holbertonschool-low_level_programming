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
	int n2;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	n2 = n % 10;

	printf("Last digit of %d is %d", n, n2);

	if (n2 > 5)
		printf("%s", " and is greater than 5\n");
	else if (n2 == 0)
		printf("%s", " and is 0\n");
	else if (n2 < 6 && n2 != 0)
		printf("%s", " and is less than 6 and not 0\n");

	return (0);
}

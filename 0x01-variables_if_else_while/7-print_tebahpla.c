/**
* main - This program prints the lowercase alphabet
* in reverse
*
* Return: 0 to stop program
*/
#include <stdio.h>
int main(void)
{
	char z;

	for (z = 'z'; z >= 'a'; z--)
		putchar(z);

	putchar('\n');

	return (0);
}

/**
* main - This program prints a string using a for-loop and putchar
*
* Return: 0 to stop the program
*/
#include <stdio.h>
int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	char *c = str;

	while (c != '\0')
	{
		putchar(*c);
		c++;
	}

	return (1);
}

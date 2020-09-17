/**
* main - This program prints a string using a for-loop and putchar
*
* Return: 0 to stop the program
*/
#include <stdio.h>
int main(void)
{
	char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	for (char *c = str; *c != '\0'; c++)
	{
		putchar(*c);
	}

	return (0);
}

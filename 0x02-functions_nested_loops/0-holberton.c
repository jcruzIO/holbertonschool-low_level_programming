/**
 * main - This program prints 'Holberton' using _putchar
 *
 * Return: 0 to stop program
 */
#include "holberton.h"
int main(void)
{
	char *str = "Holberton";
	char *ch = str;

	for (; *ch != '\0'; *ch++)
		_putchar(*ch);

	_putchar('\n');

	return (0);
}

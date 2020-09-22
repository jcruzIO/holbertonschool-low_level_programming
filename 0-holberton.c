/**
 * main - This program prints 'Holberton' to the the screen
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
}

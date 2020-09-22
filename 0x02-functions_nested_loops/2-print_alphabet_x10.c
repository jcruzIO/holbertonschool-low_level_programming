#include "holberton.h"
/**
 * main - This program prints the alphabet 10 times in lowercase
 *
 * Return: 0 to stop program
 */

int main(void)
{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}

	return (0);
}

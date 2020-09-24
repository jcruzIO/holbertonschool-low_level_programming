#include "holberton.h"

/**
 * more_numbers - This function prints 0 to 14 ten times
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10 && j < 15)
			{
				_putchar(1 + '0');
			}
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}

}

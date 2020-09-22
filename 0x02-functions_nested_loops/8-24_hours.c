#include "holberton.h"
/**
 * jack_bauer - This function prints every minute of the day
 *
 * Return: void
 */

void jack_bauer(void)
{
	int i = 0;
	int j = 0;
	int k = 0;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 6; ++j)
		{
			for (k = 0; k < 10; k++)
			{
				if (i < 10)
				{
					_putchar('0');
					_putchar(i + '0');
				}
				else if (i >= 10 && i < 20)
				{
					_putchar('1');
					_putchar((i % 10) + '0');
				}
				else if (i >= 20 && i < 24)
				{
					_putchar('2');
					_putchar((i % 10) + '0');
				}
				_putchar(':');
				_putchar(j + '0');
				_putchar(k + '0');
				_putchar('\n');
			}
		}
	}
}

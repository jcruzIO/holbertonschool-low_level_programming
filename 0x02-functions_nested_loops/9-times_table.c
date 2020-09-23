#include "holberton.h"
/**
 * times_table - This function prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int k = i * j;

			if (k >= 10)
			{
				int l = k % 10;
				int m = k / 10;

				_putchar(m + '0');
				_putchar(l + '0');

				if (j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
				continue;
			}
			else
			{
				_putchar(k + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

/**
* main - This program prints numbers from 0 to 99
*
* Return: 0 to stop program
*/
#include <stdio.h>
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i == 9 && j == 9)
				continue;
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}

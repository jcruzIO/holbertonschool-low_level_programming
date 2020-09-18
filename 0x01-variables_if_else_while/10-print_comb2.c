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
	int k;

	k = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (k == 99)
				continue;
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		k++;
	}

	putchar('\n');

	return (0);
}

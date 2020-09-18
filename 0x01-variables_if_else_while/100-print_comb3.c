/**
* main - This program prints all possible different
* combinations of two digits
*
* Return: 0 to stop program
*/
#include <stdio.h>
int main(void)
{
	int i;
	int j;
	int reset_val;
	int flag;

	flag = 1;
	i = 0;
	j = 0;
	reset_val = 1;

	for (; i < 10 && flag; i++)
	{
		j = reset_val;
		for (; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');

			if (i == 8 && j == 9)
			{
				flag = 0;
				break;
			}

			putchar(',');
			putchar(' ');

			if (j == 9)
			{
				reset_val++;
			}
		}
	}

	putchar('\n');

	return (0);
}

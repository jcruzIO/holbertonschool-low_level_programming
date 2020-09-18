/**
* main - This program prints all possible combinations
* of single-digit numbers
*
* Return: 0 to stop program
*/
#include <stdio.h>
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			continue;
		}
	}

	putchar('\n');

	return (0);
}

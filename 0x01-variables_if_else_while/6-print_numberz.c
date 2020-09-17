/**
* main - This program prints all single digit numbers
* of base 10 starting from 0 with exception that
* no variables of type char can be declared nor
* using putchar more than twice
*
* Return: 0 to stop program
*/
#include <stdio.h>
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');

	putchar('\n');

	return (0);
}

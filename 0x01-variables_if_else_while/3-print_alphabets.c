/**
* main - Program uses putchar to print letters of
* the alphabet in lowercase then in uppercase
*
* Return: 0 to stop program
*/

#include <stdio.h>

int main(void)
{
	char ch;
	char nl;

	nl = '\n';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (ch = 'A' ; ch <= 'Z' ; ch++)
	{
		putchar(ch);
	}

	putchar(nl);

	return (0);
}

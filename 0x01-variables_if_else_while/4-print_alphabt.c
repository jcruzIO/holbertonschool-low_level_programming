/**
* main - Program that prints alphabet in lowercase
* while ignoring the letters 'q' and 'e'
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
		if (ch == 'q' || ch == 'e')
			continue;
		putchar(ch);
	}

	putchar(nl);

	return (0);
}

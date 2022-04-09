#include <stdio.h>
/**
 * main -main
 * Document: Print base 16 numbers in lowercase
 * Return: 0
 */
int main(void)
{
	int i;
	char c = 'a';

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}

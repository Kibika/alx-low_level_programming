#include <stdio.h>
/**
 * main - main
 * Document: print single base 10 values using put char
 * Return: 10
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}

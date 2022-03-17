#include "main.h"
/**
 * print_line - prints a line
 * @n: number of dashes to print
 * Return: a straight line
 */
void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	if (n == 0)
	{
		_putchar('\n');
	}
	_putchar('\n');
}

#include "main.h"
/**
 * print_line - prints a line
 * @n: number of dashes to print
 * Return: a straight line
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}

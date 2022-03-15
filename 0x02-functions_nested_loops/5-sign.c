#include "main.h"
/*
 * print_sign - main
 * @n: integer input
 * Description: Check if value is positive or negative or zero
 * Return: +, - or 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

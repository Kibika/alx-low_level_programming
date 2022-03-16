#include "main.h"
#include <stdio.h>
/**
 * print_to_98 -print values up to 98
 * @n: input integer
 * Return: Values between n and 98
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 99)
		{
		printf("%d, ", n);
		n++;
		}
		printf("\n");
	}
	else if (n >= 98)
	{
		while (n > 97)
		{
			printf("%d, ", n);
			n--;
		}
		printf("\n");
	}
}

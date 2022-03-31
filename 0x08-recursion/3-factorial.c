#include "main.h"
/**
 * factorial - return n!
 * @n: integer input
 * Return: n!
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	return (n * factorial(n - 1));
}

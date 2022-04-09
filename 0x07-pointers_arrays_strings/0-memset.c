#include "main.h"
/**
 * _memset - returns a constant byte n times points to s
 * @s: first pointer to array
 * @b: byte to be printed
 * @n: number of times to print b, number of bytes b can take
 * Return: array in s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

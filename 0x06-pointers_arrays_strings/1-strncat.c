#include "main.h"
/**
 * _strncat - concatenates a string upto byte size n
 * @dest: first string
 * @src: append to dest up to n
 * @n : max bytes, 1 char = 1 byte
 * Return: concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	for (; n > j; j++)
	{
		dest[i] = '\0';
	}

	return (dest);
}

#include "main.h"
/**
 * _strncpy - copies string upto n
 * @dest: string to be copied into
 * @src: string to copy
 * @n: max number of bytes to copy
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	for (; n > j; j++)
	{
		dest[j] = '\0';
	}

	return (dest);
}

#include "main.h"
/**
 * _memcpy - copies up to n bytes from src to dest, it is a pointer to dest
 * @dest: copied string
 * @src: original string
 * @n: maximum number of bytes that can be copied
 * Return: copied string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

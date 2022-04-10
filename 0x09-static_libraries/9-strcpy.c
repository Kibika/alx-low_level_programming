#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - copies a string
 * @dest: copied string
 * @src: original string
 * Return: copied string
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0, i = 0;

	while (src[len++] != '\0')
		;
	while (i < len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

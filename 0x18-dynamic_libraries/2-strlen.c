#include "main.h"
/**
 * _strlen - retuens length of a string
 * @s: string pointer
 * Return: length of string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}

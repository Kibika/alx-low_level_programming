#include "main.h"
/**
 * _strspn - get length of substring
 * @s: string
 * @accept: substring
 * Return: len of substring in string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0;

	while (s[j] != '\0')
	{
		while (accept[i] != '\0')
		{
			if (accept[i] == s[j])
			{
				;
			}
			i++;
		}
		j++;
	}
	return (i + 1);
}

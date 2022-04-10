#include "main.h"
/**
 * _strspn - get length of substring
 * @s: string
 * @accept: substring
 * Return: len of substring in string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, c = 0, j = 0;

	while (s[j] != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (s[j] == accept[i])
			{
				c++;
				break;
			}
			i++;
		}
		if (accept[i] == '\0')
			break;
		j++;
	}
	return (c);
}

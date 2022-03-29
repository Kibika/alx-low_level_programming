#include "main.h"
/**
 * _strpbrk - check first occurrence of character from
 * string (accept) in another string s and print s++
 * @s: first string
 * @accept: second string
 * Return: string
 */
char *_strpbrk(char *s, char *accept)
{
	int j, i;
	char *p;

	j = 0;
	while (s[j] != '\0')
	{
		i = 0;

		while (accept[i] != '\0')
		{
			if (accept[i] == s[j])
			{
				p = &s[j];
				return (p);
			}
			i++;
		}
		j++;
	}

	return (0);
}

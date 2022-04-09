#include "main.h"
/**
 * string_toupper - convert to uppercase: a-97 in ASCII A = 65 97-65=32
 * @c: string input pointer
 * Return: c in uppercase
 */
char *string_toupper(char *c)
{
	int i = 0;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			c[i] = c[i] - 32;
		}
	}

	return (c);

}

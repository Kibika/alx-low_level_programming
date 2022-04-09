#include "main.h"
/**
 * rev_string -reverses a string
 * @s: pointer to string input
 * Return: nothing
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char c;

	while (s[len++] != '\0')
		;
	len--;
	len--;
	while (i < len)
	{
		c = s[i];
		s[i] = s[len];
		s[len] = c;
		i++;
		len--;
	}
}

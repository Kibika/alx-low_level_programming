#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings with only n bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to copy from s2
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int j = 0, len = 0;
	int i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len++] != '\0')
		;
	ptr = malloc(sizeof(char) * (len + n + 1));
	if (ptr == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while ((s2[j] != '\0') && (j <= n))
	{
		ptr[i] = s2[j];
		j++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
	free(ptr);
}

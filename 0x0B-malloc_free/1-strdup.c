#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns pointer to copy of string
 * @str: original string
 * Return: duplicate string
 */
char *_strdup(char *str)
{
	char *arr;
	int len = 0, i;

	if (str == NULL)
		return (NULL);

	while (str[len++] != '\0')
		;

	arr = malloc(len * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < len)
	{
		arr[i] = str[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
	free(arr);
}

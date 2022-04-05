#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k = 0, l = 0, sum = 0;
	char *arr;

	if ((s1 == NULL) | (s2 == NULL))
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	sum = i + j;
	arr = malloc(sum * sizeof(char));
	while (s1[k] != '\0')
	{
		arr[k] = s1[k];
		k++;
	}
	while (s2[l] != '\0')
	{
		arr[k] = s2[l];
		l++;
		k++;
	}
	return (arr);
	_putchar('\n');
	free(arr);

}

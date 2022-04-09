#include "main.h"
#include <stdlib.h>
/**
 * array_range - print range of numbers
 * @min: minimum value
 * @max: maximum value
 * Return: range
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * ((max - min) + 1));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++, min++)
		ptr[i] = min;

	return (ptr);
}

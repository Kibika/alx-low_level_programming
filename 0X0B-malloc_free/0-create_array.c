#include "main.h"
#include <stdlib.h>
/**
 *
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr;
	
	arr = malloc(size * sizeof(char));
	if ((size <= 0) | (arr == NULL))
	{
		return (NULL);
	}
	
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return(arr);
	free(arr);
}

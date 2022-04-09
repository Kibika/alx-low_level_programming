#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memory with malloc
 * @b: size of memory to allocate
 * Return: void pointer to allocated memory space
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}

#include "main.h"
/**
 * reverse_array - reverse an array
 * @a: array
 * @n: length of array
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (j = 0; j < n; j++)
	{
		i = a[j];
		a[j] = a[n-i-1];
		a[n-i-1] = i;
	}	
}

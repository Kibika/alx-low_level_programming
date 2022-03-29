#include "main.h"
/**
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0;

	while ((*(s + j) != 0) && (*(accept + i) != 0))
	{
		if (*(accept + i) == *(s + j))
		{
			i++;
			j++;
		}
	}
	return (j);
}

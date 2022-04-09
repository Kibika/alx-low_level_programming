#include "main.h"
/**
 * _islower - _islower
 * @c: input of function of type int a=97, z=122 in ASCII *
 * Description: Returns true if input is lowercase and false if not
 * Return: Boolean 0 or 1 both are integers
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

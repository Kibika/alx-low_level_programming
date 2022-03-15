#include "main.h"
/**
 * _abs - Print absolute value
 * @i: integer input
 * Description: print absolute value
 * Return: absolute value
 */
int _abs(int i)
{
	if (i > 0 || i == 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}

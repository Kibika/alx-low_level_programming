#include "main.h"
/**
 * _isalpha - main function
 * @c: integer input of function, ASCII equivalent of alphabet
 * Description: Returns 1 if input is an alphabet 0 otherwise
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

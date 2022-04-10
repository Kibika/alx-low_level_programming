#include "main.h"
/**
 * _puts - prints out a string
 * @str: string input
 * Return: the full string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

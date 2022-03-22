#include "main.h"
/**
 * puts2 - prints every other character
 * @str: string input
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i++]);
	}
	_putchar('\n');
}

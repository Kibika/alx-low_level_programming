#include "main.h"
/**
 * puts2 - prints every other character
 * @str: string input
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;
	char c;

	for (i = 0; str[i] != '\0'; i++)
	{
		c = str[i++];
		_putchar(c--);
	}
	_putchar('\n');
}
